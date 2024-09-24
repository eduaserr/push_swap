/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:56:31 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/24 15:35:21 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

static void	check_position(t_stack *a, t_stack *move)
{
	t_stack	*target;

	target = move->target;
	if (move->is_upper_side && !(target->is_upper_side))
	{
		if (target->index - move->index < target->mid)
			target->is_upper_side = 1;
	}
	else if (!(move->is_upper_side) && target->is_upper_side)
	{
		if ((target->index + ft_stacklen(a) - move->index) > target->mid)
			target->is_upper_side = 0;
	}
}

static void	fill_b_stack(t_stack *a, t_stack *b, t_stack *move)
{
	check_position(a, move);
	if (move->is_upper_side && move->target->is_upper_side)
		while (a != move && b != move->target)
			rrr(a, b);
	else if (!(move->is_upper_side && !(move->target->is_upper_side)))
		while (a != move && b != move->target)
			rrr(a, b);
	node_to_top_a(move, a);
	node_to_top_b(move->target, b);
	pb(a, b);
}

void	sorting_b(t_stack *a, t_stack *b)
{
	pb(&a, &b);
	if (ft_stacklen(a) > 3 && !is_sorted(a))
		pb(&a, &b);
	while (ft_stacklen(a) > 3 && !is_sorted(a))
	{
		stack_a_targets(a, b);
		fill_b_stack(a, b, stack_set_structure(a, b));
	}
}
