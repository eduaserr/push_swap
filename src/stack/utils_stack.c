/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:21:05 by eduaserr          #+#    #+#             */
/*   Updated: 2024/08/30 13:51:09 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../inc/push_swap.h"

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
