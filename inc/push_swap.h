/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:40:22 by eduaserr          #+#    #+#             */
/*   Updated: 2024/08/05 20:09:12 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				top;
	int				mid;
	int				bottom;
	int				*target;
	struct s_stack	*next;
	struct s_stack	*prev;
}		t_stack;

int		main(int argc,char **argv);

void	ft_check(int argc, char **argv, char **nbr, t_stack *a);

char	**get_numbers(char **nbr);

long	ft_atol_ps(const char *str);

void	init_data(int argc, char **argv,char **nbr);

void	p_error();

#endif