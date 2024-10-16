/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:54:48 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/16 20:12:25 by eduaserr         ###   ########.fr       */
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
