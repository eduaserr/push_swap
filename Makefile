# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 13:02:41 by eduaserr          #+#    #+#              #
#    Updated: 2024/07/24 16:39:51 by eduaserr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COMPILATION ###
NAME	= push_swap
LIBFT	= Libft/
CHECKER = checker
INCLUDE = -L ./Libft -lft

CC		= clang
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

### SRC , OBJ ###
SRCS	= src/
SRCS_PS = src/push_swap.c
#SRCS_BON = src/checker/checker_bonus.c

OBJS = $(SRCS:.c=.o)
OBJS_PS = $(SRCS_PS:.c=.o)
#OBJS_BON = $(SRCS_BON:.c=.o)

### RULES ###
all : $(NAME)

$(NAME)	: $(OBJS) $(OBJS_PS)
	@make -C $(LIBFT)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Compiled succesfully"

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re