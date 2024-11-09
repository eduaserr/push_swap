/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_costs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:51:23 by eduaserr          #+#    #+#             */
/*   Updated: 2024/11/05 18:09:45 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	get_index(t_stack *stack)
{
	int	i;
	int	half;

	i = 0;
	half = (ft_stacklen(stack) + 1) / 2;
	while (stack)
	{
		stack->index = i;
		if (stack->index < half)
			stack->is_upper_side = 1;
		else
			stack->is_upper_side = 0;
		i++;
		stack = stack->next;
	}
}

void	get_cost(t_stack *a, t_stack *b)
{
	int	a_len;
	int	b_len;

	a_len = ft_stacklen(a);
	b_len = ft_stacklen(b);
	while (a)
	{
		a->cost = a->index;
		if (!a->is_upper_side)
			a->cost = a_len - a->index;
		if (a->target->is_upper_side)
			a->cost += a->target->index;
		else
			a->cost += b_len - a->target->index;
		a = a->next;
	}
}

t_stack	*cheapest(t_stack *stack)
{
	t_stack	*cheapest;

	cheapest = stack;
	stack = stack->next;
	while (stack)
	{
		if (stack->cost < cheapest->cost)
			cheapest = stack;
		stack = stack->next;
	}
	return (cheapest);
}

void	cost_analysis(t_stack **a, t_stack **b)
{
	get_index(*a);
	get_index(*b);
	get_cost(*a, *b);
	move_to_b(a, b, cheapest(*a));
}
