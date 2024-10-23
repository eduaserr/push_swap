/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:38:59 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/23 20:53:02 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ; 
	tmp = (*stack)->next;		//guardamos puntero al segundo nodo
	(*stack)->next = tmp->next;	//primer nuevo nodo apunta al tercero
	tmp->next = *stack;			//segundo nodo apunta al primero
	*stack = tmp;				//segundo nodo a primero
}

void	sa(t_stack *a)
{
	swap(&a);
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	swap(&b);
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(&a);
	sb(&b);
	ft_printf("ss\n");
}
