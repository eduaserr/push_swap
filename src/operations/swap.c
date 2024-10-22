/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:38:59 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/22 16:42:56 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap(t_stack **a)
{
	t_stack	*tmp;

	if (!a || !(*a))
		return ; 
	tmp = (*a)->next;		//guardamos puntero al segundo nodo
	(*a)->next = tmp->next;	//primer nuevo nodo apunta al tercero
	tmp->next = *a;			//segundo nodo apunta al primero
	*a = tmp;				//segundo nodo a primero
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
	sa(a);
	sb(b);
	ft_printf("ss\n");
}
