/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:40:22 by eduaserr          #+#    #+#             */
/*   Updated: 2024/08/12 18:28:37 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <limits.h>

typedef struct s_stack
{
	long			value;
	int				index;
	int				cost;
	int				top;
	int				mid;
	int				to_mid;
	int				bottom;
	int				*target;
	struct s_stack	*next;
	struct s_stack	*prev;
}		t_stack;

int		main(int argc, char **argv);

void	ft_check_input(int argc, char **argv, char **nbr, t_stack **a);

void	**get_nbrs(char **nbr, t_stack **a);

void	init_stack(t_stack **a, long n);

t_stack	*ft_lstlast_ps(t_stack *stack);

t_stack	*ft_lstnew_ps(long n);

void	*free_stack(t_stack **stack);

long	ft_atol_ps(const char *str);

void	*free_array(char ***str);

void	p_error();

#endif