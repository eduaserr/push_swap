/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:48:08 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/05 21:49:56 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack *push_node;

	if (!(*src))
		return ;
	push_node = *src;
	*src = (*src)->next;
	push_node->next = *dst;
	*dst = push_node;
}

void	pa(t_stack **a, t_stack **b)
{
	ft_printf("pa\n");
	push(b, a);
}

void	pb(t_stack **a, t_stack **b)
{
	ft_printf("pb\n");
	push(a, b);
}
