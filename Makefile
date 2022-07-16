NAMEH		:= libft.h
NAMEAR		:= libft.a
NAMESO		:= libft.so

INCLUDE_DIR := /usr/include/
INSTALL_DIR	:= /usr/lib/

CC			:= /bin/clang
CPPFLAGS	= -fPIC $(INCS) -MMD -MF $(patsubst $(OBJS_DIR)%,$(DEPS_DIR)%,$(@:.o=.d))
CFLAGS		:= -Wall -Wstrict-prototypes -Wmissing-prototypes -Wshadow -Wconversion -Wextra -Werror

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

INCS		:= -I..
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
		$(CC) $(CFLAGS) -shared -o $@ $^

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

lint: clang-tidy cppcheck cpplint

.PHONY: clang-tidy
clang-tidy:
		clang-tidy $(SRCS) -checks='-*,clang-analyzer-*' -warnings-as-errors='*' -- $(INCS)

.PHONY: cppcheck
cppcheck:
		cppcheck $(INCS) --enable=all --suppress=missingIncludeSystem --suppress=unusedFunction $(NAMEH) $(INCS_DIR) $(SRCS_DIR)

.PHONY: cpplint
cpplint:
		cpplint --recursive --filter=-runtime/int,-readability/casting,-legal/copyright libft.h incs/ srcs/

.PHONY: test
test:
		CC=$(CC) $(GO) test -v -count=1 ./tests/char

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
		@ $(MKDIR) $(dir $@) $(dir $(patsubst $(OBJS_DIR)%, $(DEPS_DIR)%, $@))
		$(CC) $(CPPFLAGS) $(CFLAGS) -o $@ -c $<

-include $(DEPS)
