/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:21:05 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/17 18:47:17 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

t_stack	*ft_lstlast_ps(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack	*ft_lstnew_ps(long n)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = n;
	new_node->next = NULL;
	return (new_node);
}

int	ft_stacklen(t_stack *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = 1;
	while (stack->next)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

t_stack	*max_stack(t_stack *stack)
{
	t_stack	*max_node;
	int		max_value;

	if (!stack)
		return (NULL);
	max_node = stack;
	max_value = stack->value;
	while (stack->next)
	{
		stack = stack->next;
		if (max_value < stack->value)
		{
			max_value = stack->value;
			max_node = stack;
		}
	}
	return (max_node);
}

t_stack	*min_stack(t_stack *stack)
{
	t_stack	*min_node;
	int		min_value;

	if (!stack)
		return (NULL);
	min_node = stack;
	min_value = stack->value;
	while (stack->next)
	{
		stack = stack->next;
		if (min_value > stack->value)
		{
			min_value = stack->value;
			min_node = stack;
		}
	}
	return (min_node);
}
