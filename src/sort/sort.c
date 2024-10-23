/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:36:39 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/23 20:42:43 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

/*void	limits_stack(int *min, int *max, t_stack *a)
{
	int	min_value;
	int	max_value;

	*min = 1;
	*max = 1;
	min_value = a->value;
	max_value = a->value;
	a = a->next;
	if ()
	printfullstack("	a_stack : \n", a);
}*/

void	sort_three(t_stack *a)
{
	t_stack	*tmp;

	if (is_sorted(a))
		return ;
	tmp = a;
	if (tmp->value < tmp->next->value)
	{
		if (tmp->next->value > tmp->next->next->value
			&& tmp->value > tmp->next->next->value)
			rra(a);
		else if (tmp->next->value < tmp->next->next->value
			&& tmp->value < tmp->next->next->value)
		{
			rra(a);
			sa(a);
		}
	}
	else if (tmp->value > tmp->next->value)
	{
		if (tmp->next->value > tmp->next->next->value
			&& tmp->value > tmp->next->next->value)
		{
			sa(a);
			rra(a);
		}
		else if (tmp->next->value < tmp->next->next->value
			&& tmp->value < tmp->next->next->value)
			sa(a);
		else
			ra(a);
	}
	printfullstack("after sort_three  ________ \n", a);
}

void	sort_big(t_stack *a, t_stack *b)
{
	if (a || b)
		return (printfullstack("a stack :	\n", a), printfullstack("b stack :	\n", b));
}

void	sort_algorithm(t_stack *a, t_stack *b)
{
	int	stack_len;

	stack_len = ft_stacklen(a);
	if (is_sorted(a) && !b)
		return ;
	if (stack_len == 2)
		sa(a);
	else if (stack_len == 3)
		while (!is_sorted(a))
			sort_three(a);
	else if (stack_len > 3)
		if (!is_sorted(a))
			sort_big(a, b);
}
