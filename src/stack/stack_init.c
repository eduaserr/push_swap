/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:54:48 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/28 16:32:04 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_stack	*ft_lstnew_ps(long content)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = content;
	node->next = NULL;
	return (node);
}

t_stack	*ft_lstlast_ps(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	ft_lstadd_back_ps(t_stack **stack, t_stack *node)
{
	if (!(*stack))
		*stack = node;
	else
		ft_lstlast_ps(*stack)->next = node;
}


void	init_stack(long n, t_stack **a)
{
	t_stack	*new_node;

	new_node = ft_lstnew_ps(n);
	if (!new_node)
	{
		ft_freestack(a);
		p_error();
	}
	ft_lstadd_back_ps(a, new_node);
}
