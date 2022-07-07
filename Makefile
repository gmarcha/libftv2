NAME		:= libft.a

CC			:= /bin/clang
CFLAGS		:= -Wall -Wextra -Werror

AR			:= /bin/ar
ARFLAGS		:= rcs

MKDIR		:= /bin/mkdir -p
RM			:= /bin/rm -rf
LS			:= /bin/ls

INCS_DIR	:= incs
SRCS_DIR	:= srcs
OBJS_DIR	:= objs
DEPS_DIR	:= deps

DIRS		:= $(shell $(LS) $(SRCS_DIR))

INCS		:= $(foreach dir, $(addprefix $(INCS_DIR)/, $(DIRS)), $(addprefix -I, $(dir)))
SRCS		:= $(foreach dir, $(addprefix $(SRCS_DIR)/, $(DIRS)), $(wildcard $(dir)/*.c))
OBJS		:= $(patsubst $(SRCS_DIR)%, $(OBJS_DIR)%, $(SRCS:.c=.o))
DEPS		:= $(patsubst $(SRCS_DIR)%, $(DEPS_DIR)%, $(SRCS:.c=.d))

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(ARFLAGS) $@ $^

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
		@ $(MKDIR) $(dir $@)
		$(CC) $(CFLAGS) $(INCS) -MMD -MF $(patsubst $(OBJS_DIR), $(DEPS_DIR), $(@:.o=.d)) -o $@ -c $<

.PHONY: test
test: all
		$(CC) $(CFLAGS) -I. main.c -L. -lft && ./a.out

.PHONY: clean
clean:
		$(RM) $(OBJS) $(DEPS)

.PHONY: fclean
fclean: clean
		$(RM) $(NAME)

.PHONY: re
re: fclean all

-include $(DEPS)
