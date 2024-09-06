/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:39:55 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/06 10:53:59 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

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

void	sort_three(t_stack **stack)
{
	int	min;
	int	max;
	int	i;

	i = 0;
	limits_stack(&min, &max, *stack);
	if (max == 1)
		ra(stack);
	else if (min == 1 || max == 3)
		sa(stack);
	else if (min == 3)
		rra(stack);
}

void	sort_big()
{}

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
		sort_big();
}
