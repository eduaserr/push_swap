/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:39:04 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/23 20:52:42 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	ft_lstlast_ps(*stack)->next = tmp;
	(*stack) = (*stack)->next;
	tmp->next = NULL;
}

void	ra(t_stack *a)
{
	rotate(&a);
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	rotate(&b);
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(&a);
	rotate(&b);
	ft_printf("rr\n");
}
