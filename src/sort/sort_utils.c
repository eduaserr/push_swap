/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:10:34 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/20 21:12:59 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

int	is_sorted(t_stack *stack)
{
	if (ft_stacklen(stack) < 2)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	limits_stack(int *min, int *max, t_stack *stack)
{
	int	i;
	int	min_value;
	int	max_value;

	i = 1;
	*min = 1;
	*max = 1;
	min_value = stack->value;
	max_value = stack->value;
	stack = stack->next;
	while (stack)
	{
		i++;
		if (min_value > stack->value)
		{
			min_value = stack->value;
			*min = i;
		}
		if (max_value < stack->value)
		{
			max_value = stack->value;
			*max = i;
		}
		stack = stack->next;
	}
}

void	stack_index_side(t_stack *stack)
{
	int	i;
	int	half;

	i = 0;
	half = (ft_stacklen(stack) + 1) / 2;
	while (stack)
	{
		stack->index = ++i;
		stack->mid = half;
		if (i <= half)
		{
			stack->is_upper_side = 1;
			stack->to_mid = half - i;
		}
		else
		{
			stack->is_upper_side = 0;
			stack->to_mid = i - half;
		}
		stack = stack->next;
	}
}

t_stack	*stack_set_structure(t_stack *a, t_stack *b)
{
	stack_index_side(a);
	stack_index_side(b);
	stack_a_targets(a, b);
	return (stack_costs(a, b));
}

void	max(int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}
