# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 14:05:06 by eduaserr          #+#    #+#              #
#    Updated: 2024/07/24 20:21:49 by eduaserr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COMPILATION ###
NAME	= libft.a
CC	= clang
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

### SRCS & OBJS ###
SRCS	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_toupper.c ft_tolower.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		ft_memset.c ft_bzero.c ft_calloc.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memcmp.c\
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c\
		ft_atoi.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_itoa.c ft_split.c\

BONUS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\

PF_SRCS	= ft_printf/ft_printf_utils.c ft_printf/ft_printf.c

GNL_SRCS = get_next_line/get_next_line.c get_next_line/get_next_line_utils.c


PF_OBJS = $(PF_SRCS:.c=.o)
GNL_OBJS = $(GNL_SRCS:.c=.o)
OBJS	= $(SRCS:.c=.o) $(PF_OBJS) $(GNL_OBJS)
BONUS_OB = $(BONUS:.c=.o)


### RULES ###
all : $(NAME)

$(NAME)	: $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Compiled succesfully"

bonus : $(OBJS) $(BONUS_OB)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OB)
	@ranlib $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS) $(BONUS_OB)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

rebonus : fclean bonus

.PHONY: all clean fclean re bonus rebonus
