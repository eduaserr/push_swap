/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:39:55 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/18 20:29:54 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

//node_to_top_a
//node_to_top_b

void	sort_three(t_stack **stack)
{
	int	min;
	int	max;

	limits_stack(&min, &max, *stack);
	if (max == 1)
		ra(stack);
	else if (min == 1 || max == 3)
		sa(stack);
	else if (min == 3)
		rra(stack);
}

void	sort_big(t_stack **a, t_stack **b)
{
	sorting_b(a, b);
}

void	sort_algorithm(t_stack *a, t_stack *b)
{
	if (is_sorted(a) && !b)
		return ;
	if (ft_stacklen(a) == 2)
		sa(&a);
	else if (ft_stacklen(a) == 3)
		while (!(is_sorted(a)))
			sort_three(&a);
	else if (!is_sorted(a))
		sort_big(&a, &b);
}
