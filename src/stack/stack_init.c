/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:54:48 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/14 19:29:48 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

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

void	ft_lstadd_back_ps(t_stack **stack, t_stack *node)
{
	t_stack	*end;

	if (!(*stack))
		*stack = node;
	else
	{
		end = ft_lstlast_ps(*stack);
		end->next = node;
	}
}

t_stack	*ft_lstlast_ps(t_stack *stack) //comprobar asignacion de punteros
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
