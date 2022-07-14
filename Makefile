NAMEAR		:= libft.a
NAMESO		:= libft.so

INSTALL_DIR	:= /usr/local/lib/

CC			:= /bin/clang
CPPFLAGS	:= -I.
CFLAGS		:= -Wall -Wstrict-prototypes -Wmissing-prototypes -Wshadow -Wextra -Werror -fPIC

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
		$(CP) $(NAMESO) $(INSTALL_DIR)
		$(CHMOD) 755 $(INSTALL_DIR)$(NAMESO)

uninstall:
		$(RM) $(INSTALL_DIR)$(NAMESO)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
		@ $(MKDIR) $(dir $@)
		@ $(MKDIR) $(dir $(patsubst $(OBJS_DIR)%, $(DEPS_DIR)%, $@))
		$(CC) $(CPPFLAGS) $(CFLAGS) -MMD -MF $(patsubst $(OBJS_DIR)%,$(DEPS_DIR)%,$(@:.o=.d)) -o $@ -c $<

.PHONY: clean
clean:
		$(RM) $(OBJS) $(DEPS) $(NAME) $(NAMESO)

.PHONY: re
re: clean all

-include $(DEPS)
