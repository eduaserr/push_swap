/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:16:01 by eduaserr          #+#    #+#             */
/*   Updated: 2024/11/01 20:23:40 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	a_targets(t_stack *a, t_stack *b)
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
			a->target = max_stack(b);
		a = a->next;
	}
}

t_stack	*move_to_b(t_stack *a, t_stack *b, t_stack *cheapest)
{
	ft_printf("--",a, b, cheapest);
	return (0);
}
