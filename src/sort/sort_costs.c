/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_costs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:51:23 by eduaserr          #+#    #+#             */
/*   Updated: 2024/11/01 21:20:00 by eduaserr         ###   ########.fr       */
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
		if (stack->index <= half)
			stack->is_upper_side = 1;
		else
			stack->is_upper_side = 0;
		i++;
		stack = stack->next;
	}
}

void	node_to_top(t_stack *stack)
{
	int	a_len;
	int	b_len;

	a_len = ft_stacklen(stack);
	b_len = ft_stacklen(stack->target);
	while (stack)
	{
		stack->cost = stack->index;
		if (!stack->is_upper_side)
			stack->cost = a_len - stack->index;
		if (stack->target->is_upper_side)
			stack->cost += stack->target->index;
		else
			stack->cost += b_len - stack->target->index;
		stack = stack->next;
	}
	//printfullstack("a ----\n", stack);
	//printfullstack("b ----\n", stack->target);
}

t_stack	*cheapest(t_stack *stack)
{
	t_stack	*cheapest;

	cheapest = stack;
	while (stack)
	{
		if (stack->cost < cheapest->cost)
			cheapest = stack;
		stack = stack->next;
	}
	return (cheapest);
}

void	cost_analysis(t_stack *a, t_stack *b)
{
	get_index(a);
	get_index(b);
	node_to_top(a);
	//node_to_top(b);
//	move_to_b(a, b, cheapest(a)); //revisar
}
