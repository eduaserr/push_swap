/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:38:33 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/18 16:00:28 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	*push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (!src || !dst)
		return ;
	tmp = src;
	(*src)->next = src;
	tmp->next = dst;
	dst = tmp;
}

void	pa(t_stack *a, t_stack *b)
{
	push(b, a);
	printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	push(a, b);
	printf("pb\n");
}
