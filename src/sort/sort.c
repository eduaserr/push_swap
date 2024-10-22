/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:36:39 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/22 16:48:10 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_three(t_stack *a)
{
	if (a)
		return (printfullstack("a stack :	", a));
}

void	sort_big(t_stack *a, t_stack *b)
{
	if (a || b)
		return (printfullstack("a stack :	", a), printfullstack("b stack :	", b));
}

void	sort_algorithm(t_stack *a, t_stack *b)
{
	int	stack_len;

	stack_len = ft_stacklen(a);
	if (is_sorted(a) && !b)
		printfullstack("a stack :	", a);
	if (stack_len == 2)
		sa(a);
	else if (stack_len == 3)
		while (!is_sorted(a))
			sort_three(a);
	else if (stack_len > 3)
		if (!is_sorted(a))
			sort_big(a, b);
}
