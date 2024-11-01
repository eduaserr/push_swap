/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:34:25 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/31 20:10:59 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	ft_stacklen(t_stack *stack)
{
	int		i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

t_stack	*min_stack(t_stack *stack)
{
	t_stack	*min;

	min = stack;
	stack = stack->next;
	while (stack)
	{
		if (min->value > stack->value)
		{
			min = stack;
		}
		stack = stack->next;
	}
	return (min);
}

t_stack	*max_stack(t_stack *stack)
{
	t_stack	*max;

	max = stack;
	stack = stack->next;
	while (stack)
	{
		if (max->value < stack->value)
		{
			max = stack;
		}
		stack = stack->next;
	}
	return (max);
}

void	printfullstack(char *str, t_stack *stack)
{
	t_stack	*node;

	if (!stack)
		ft_printf("NULL\n");
	node = stack;
	ft_printf("%s", str);
	while (node)
	{
		ft_printf("	val %d\n", node->value);
		ft_printf("		indx %d\n", node->index);
		ft_printf("		cost %d\n", node->cost);
		ft_printf("		utod %d\n", node->is_upper_side);
		ft_printf("		mid %d\n", node->mid);
		if (node->target)
			ft_printf("		target val %d\n", node->target->value);
		node = node->next;
	}
}
