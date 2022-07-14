NAMEH		:= libft.h
NAMEAR		:= libft.a
NAMESO		:= libft.so

INCLUDE_DIR := /usr/include/
INSTALL_DIR	:= /usr/lib/

CC			:= /bin/clang
CPPFLAGS	:= -I..
CFLAGS		:= -Wall -Wstrict-prototypes -Wmissing-prototypes -Wshadow -Wextra -Werror -fPIC

GO			:= /usr/local/go/bin/go

AR			:= /bin/ar rcs
LS			:= /bin/ls
CP			:= /bin/cp
CHMOD		:= /bin/chmod
MKDIR		:= /bin/mkdir -p
RM			:= /bin/rm -rf

INCS_DIR	:= incs/
SRCS_DIR	:= srcs/
OBJS_DIR	:= objs/
DEPS_DIR	:= deps/

DIRS		:= $(shell $(LS) $(SRCS_DIR))

# INCS		:= $(foreach dir, $(addprefix $(INCS_DIR), $(DIRS)), $(addprefix -I, $(dir)))
SRCS		:= $(foreach dir, $(addprefix $(SRCS_DIR), $(DIRS)), $(wildcard $(dir)/*.c))
OBJS		:= $(patsubst $(SRCS_DIR)%, $(OBJS_DIR)%, $(SRCS:.c=.o))
DEPS		:= $(patsubst $(SRCS_DIR)%, $(DEPS_DIR)%, $(SRCS:.c=.d))

.PHONY: all
all: ar so

.PHONY: ar
ar: $(NAMEAR)

$(NAMEAR): $(OBJS)
		$(AR) $@ $^

.PHONY: so
so: $(NAMESO)

$(NAMESO): $(OBJS)
		$(CC) -shared -o $@ $^

.PHONY: install
install: so
		$(MKDIR) $(INCLUDE_DIR)libftv2/
		$(CP) -r $(NAMEH) $(INCS_DIR) $(INCLUDE_DIR)libftv2/
		$(CP) $(NAMESO) $(INSTALL_DIR)
		$(CHMOD) 755 $(INSTALL_DIR)$(NAMESO)

.PHONY: uninstall
uninstall:
		$(RM) $(INCLUDE_DIR)libftv2/
		$(RM) $(INSTALL_DIR)$(NAMESO)

.PHONY: clean
clean:
		$(RM) $(OBJS) $(DEPS) $(NAME) $(NAMESO)

.PHONY: re
re: clean all

.PHONY: test
test: install
		CC=$(CC) $(GO) test -count=1 ./tests/char

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
		@ $(MKDIR) $(dir $@)
		@ $(MKDIR) $(dir $(patsubst $(OBJS_DIR)%, $(DEPS_DIR)%, $@))
		$(CC) $(CPPFLAGS) $(CFLAGS) -MMD -MF $(patsubst $(OBJS_DIR)%,$(DEPS_DIR)%,$(@:.o=.d)) -o $@ -c $<

-include $(DEPS)
