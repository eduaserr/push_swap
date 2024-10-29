/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:36:39 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/29 18:29:54 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_three(t_stack **a)
{
	t_stack	*max;

	max = max_stack(*a);
	if (is_sorted(*a))
		return ;
	if ((*a) == max)
		ra(a);
	else if ((*a)->next == max)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_big(t_stack **a, t_stack **b)
{
	int	stacklen;

	stacklen = ft_stacklen(*a);
	if (stacklen-- > 3 && !is_sorted(*a))
		pb(a, b);
	if (stacklen-- > 3 && !is_sorted(*a))
		pb(a, b);
	printfullstack("- pre big a stack :	\n", *a);
	printfullstack("- pre big b stack :	\n", *b);
	while (stacklen-- > 3 && !is_sorted(*a))
	{
		a_targets(a, b);
		//index de a
		//
	}
}

void	sort_algorithm(t_stack *a, t_stack *b)
{
	int	stack_len;

	stack_len = ft_stacklen(a);
	//printfullstack("pre sort	\n", a);
	if (is_sorted(a) && !b)
		return ;
	if (stack_len == 2)
		sa(&a);
	else if (stack_len == 3)
		sort_three(&a);
	else if (stack_len > 3)
		if (!is_sorted(a))
			sort_big(&a, &b);
	printfullstack("pos sort	\n", a);
}
