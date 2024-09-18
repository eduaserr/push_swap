/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:09:11 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/09 20:11:07 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

void	init_stack(t_stack **a, long n)
{
	t_stack	*new_node;

	new_node = ft_lstnew_ps(n);
	if (!new_node)
	{
		free_stack(a);
		p_error();
	}
	if (!(*a))
		*a = new_node;
	else
		ft_lstlast_ps(*a)->next = new_node;
}
