/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 14:12:23 by eduaserr          #+#    #+#             */
/*   Updated: 2024/08/30 19:34:16 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../inc/push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	**first;
	t_stack	**second;

	if (!(*stack) || !(*stack)->next)
		return ;
	first = *stack;
	second = (*stack)->next;
	(*first)->next = (*second)->next;
	(*second)->next = first;
	*stack = second;
}

void	sa(t_stack **a)
{
	ft_printf("sa\n");
	swap(a);
}
void	sb(t_stack **b)
{
	ft_printf("sb\n");
	swap(b);
}
void	ss(t_stack **a, t_stack **b)
{
	ft_printf("ss\n");
	swap(a);
	swap(b);
}