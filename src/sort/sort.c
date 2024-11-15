/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:36:39 by eduaserr          #+#    #+#             */
/*   Updated: 2024/11/05 19:40:29 by eduaserr         ###   ########.fr       */
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
	while (stacklen-- > 3 && !is_sorted(*a))
	{
		a_targets(*a, *b);
		cost_analysis(a, b);
	}
	sort_three(a);
	while (*b)
	{
		get_index(*a);
		get_index(*b);
		b_targets(*a, *b);
		move_to_a(a, b);
	}
	get_index(*a);
	minvalue_ontop(a);
}

void	sort_algorithm(t_stack **a, t_stack **b)
{
	int	stack_len;

	stack_len = ft_stacklen(*a);
	if (is_sorted(*a) && !(*b))
		return ;
	if (stack_len == 2)
		sa(a);
	else if (stack_len == 3)
		sort_three(a);
	else if (stack_len > 3)
		if (!is_sorted(*a))
			sort_big(a, b);
}
