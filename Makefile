# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 13:02:41 by eduaserr          #+#    #+#              #
#    Updated: 2024/11/04 21:15:09 by eduaserr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COMPILATION ###
NAME	= push_swap
LIBFT	= lib/
CHECKER	= checker
INCLUDE	= -L ./lib -lft

CC		= clang
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

### SRC ###

SRCS_PS	= src/main.c

SRCS	= src/operations/push.c src/operations/rotate.c src/operations/rrotate.c src/operations/swap.c \
	src/sort/sort_costs.c src/sort/sort_stack.c src/sort/sort_utils.c src/sort/sort.c \
	src/stack/stack_init.c src/stack/stack_utils.c \
	src/utils/utils_error.c src/utils/utils_parse_input.c src/utils/utils.c

SRCS_BON = src/checker/checker_bonus.c

### OBJ ###
OBJS = $(SRCS:.c=.o)
OBJS_PS = $(SRCS_PS:.c=.o)
OBJS_BON = $(SRCS_BON:.c=.o)

### RULES ###
all : $(NAME)

$(NAME)	:$(OBJS_PS) $(OBJS)
	@make -C $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS_PS) $(OBJS) -o $(NAME) $(INCLUDE)
	@echo "Push_swap compiled successfully"

bonus: $(OBJS) $(OBJS_BON)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS_PS) $(OBJS) $(OBJS_BON)
	@make clean -C $(LIBFT)

fclean: clean
	@$(RM) $(NAME) $(CHECKER)
	@make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re bonus