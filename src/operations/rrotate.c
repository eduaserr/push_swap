/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:48:14 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/03 21:52:56 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../inc/push_swap.h"

void	rrotate(t_stack **stack)
{
	if (!(*stack) || !(*stack)->next)
		return ;
	
}

void	rra(t_stack **a)
{
	ft_printf("rra\n");
	rrotate(a);
}

void	rrb(t_stack **b)
{
	ft_printf("rrb\n");
	rrotate(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	ft_printf("rrr\n");
	rrotate(a);
	rrotate(b);
}
