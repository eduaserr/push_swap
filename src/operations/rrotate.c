/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:50:38 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/23 22:04:33 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rrotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack *nd_last;

	tmp = *stack;
	nd_last = *stack;
	while (nd_last->next->next)
		nd_last = nd_last->next;
	ft_lstlast_ps(*stack)->next = tmp;
	nd_last->next = NULL;
}

void	rra(t_stack *a)
{
	rrotate(&a);
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	rrotate(&b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	rrotate(&a);
	rrotate(&b);
	ft_printf("rrr\n");
}
