NAMEAR		:= libft.a
NAMESO		:= libft.so

CC			:= /bin/clang
CFLAGS		:= -Wall -Wextra -Werror -fPIC

AR			:= /bin/ar
ARFLAGS		:= rcs

LS			:= /bin/ls
MV			:= /bin/mv
CHMOD		:= /bin/chmod
MKDIR		:= /bin/mkdir -p
RM			:= /bin/rm -rf

INCS_DIR	:= incs
SRCS_DIR	:= srcs
OBJS_DIR	:= objs
DEPS_DIR	:= deps

DIRS		:= $(shell $(LS) $(SRCS_DIR))

INCS		:= -I. # $(foreach dir, $(addprefix $(INCS_DIR)/, $(DIRS)), $(addprefix -I, $(dir)))
SRCS		:= $(foreach dir, $(addprefix $(SRCS_DIR)/, $(DIRS)), $(wildcard $(dir)/*.c))
OBJS		:= $(patsubst $(SRCS_DIR)%, $(OBJS_DIR)%, $(SRCS:.c=.o))
DEPS		:= $(patsubst $(SRCS_DIR)%, $(DEPS_DIR)%, $(SRCS:.c=.d))

.PHONY: all
all: $(NAMEAR)

$(NAMEAR): $(OBJS)
		$(AR) $(ARFLAGS) $@ $^

.PHONY: so
so: $(NAMESO)

$(NAMESO): $(OBJS)
		$(CC) -shared -o $@ $^

.PHONY: install
install: so
		$(MV) $(NAMESO) /usr/lib
		$(CHMOD) 755 /usr/lib/$(NAMESO)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
		@ $(MKDIR) $(dir $@)
		@ $(MKDIR) $(dir $(patsubst $(OBJS_DIR)%, $(DEPS_DIR)%, $@))
		$(CC) $(CFLAGS) $(INCS) -MMD -MF $(patsubst $(OBJS_DIR)%, $(DEPS_DIR)%, $(@:.o=.d)) -o $@ -c $<

.PHONY: clean
clean:
		$(RM) $(OBJS) $(DEPS)

.PHONY: fclean
fclean: clean
		$(RM) $(NAME)

.PHONY: re
re: fclean all

-include $(DEPS)
