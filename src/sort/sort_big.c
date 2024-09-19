/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:56:31 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/19 15:33:20 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

static void	check_position(t_stack *a, t_stack *move)
{
	t_stack	*target;

	target = move->target;
}

static void	fill_b_stack(t_stack *a, t_stack *b, t_stack move)
{
	check_position(a, &move);
}

void	sorting_b(t_stack *a, t_stack *b)
{
	pb(&a, &b);
	if (ft_stacklen(a) > 3 && !is_sorted(a))
		pb(&a, &b);
	while (ft_stacklen(a) > 3 && !is_sorted(a))
	{
		stack_a_targets(a, b);
		fill_b_stack(a, b, *stack_set_structure(a, b));
	}
}
