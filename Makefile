# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 13:02:41 by eduaserr          #+#    #+#              #
#    Updated: 2024/07/25 14:00:37 by eduaserr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COMPILATION ###
NAME	= push_swap
LIBFT	= lib/
CHECKER = checker
INCLUDE = -L ./lib -lft

CC		= clang
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

### SRC ###
SRCS	=
SRCS_PS = src/push_swap.c
SRCS_BON = src/checker/checker_bonus.c

### OBJ ###
OBJS = $(SRCS:.c=.o)
OBJS_PS = $(SRCS_PS:.c=.o)
OBJS_BON = $(SRCS_BON:.c=.o)

### RULES ###
all : $(NAME)

$(NAME)	:$(OBJS_PS) $(OBJS)
	@make -C $(LIBFT)
	@ar rcs $(NAME) $(OBJS)
	@$(CC) $(FLAGS) $(OBJS_PS) $(OBJS) -o $(NAME) $(INCLUDE)
	@ranlib $(NAME)
	@echo "Compiled succesfully"

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