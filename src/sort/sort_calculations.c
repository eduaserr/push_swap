/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_calculations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:14:08 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/23 20:22:58 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

void	stack_a_targets(t_stack *a, t_stack *b)
{
	t_stack	*tmp;
	long	closest_below;

	while (a)
	{
		closest_below = LONG_MIN;
		tmp = b;
		while (tmp)
		{
			if (a->value > tmp->value && tmp->value > closest_below)
			{
				closest_below = tmp->value;
				a->target = tmp;
			}
			tmp = tmp->next;
		}
		if (closest_below == LONG_MIN)
			a->target = min_stack(b);
		a = a->next;
	}
}

void	stack_b_targets(t_stack *a, t_stack *b)
{
	t_stack	*tmp;
	long	closest_above;

	while (b)
	{
		closest_above = LONG_MAX;
		tmp = a;
		while (tmp)
		{
			if (b->value < tmp->value && tmp->value < closest_above)
			{
				closest_above = tmp->value;
				b->target = tmp;
			}
			tmp = tmp->next;
		}
		if (closest_above == LONG_MAX)
			b->target = min_stack(a);
		b = b->next;
	}
}

void	calculate_costs(t_stack *a, t_stack *target, int a_len, int b_len)
{
	int	index_a;
	int index_t;

	index_a = a->index;
	index_t = target->index;
	if (a->is_upper_side && (target->is_upper_side
		|| (index_t - index_a < target->mid)))
		a->cost = max(a->index, target->index);
	else if (!a->is_upper_side && (!target->is_upper_side
		|| (index_t + a_len - index_a) > target->mid))
		a->cost = max(a_len - a->index + 1, b_len - target->index + 1);
	else if (a->is_upper_side)
		a->cost = a->index + (b_len - target->index + 1);
	else
		a->cost = (a_len - a->index + 1) + target->index;
}

t_stack	*stack_costs(t_stack *a, t_stack *b)
{
	t_stack	*cheapest;
	t_stack	*target;
	int		low_cost;
	int		a_len;
	int		b_len;

	low_cost = INT_MAX;
	a_len = ft_stacklen(a);
	b_len = ft_stacklen(b);
	while (a)
	{
		target = a->target;
		calculate_costs(a, target, a_len, b_len);
		if (a->cost < low_cost)
		{
			low_cost = a->cost;
			cheapest = a;
		}
		a = a->next;
	}
	return (cheapest);
}
