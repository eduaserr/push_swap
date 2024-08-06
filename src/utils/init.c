/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:09:11 by eduaserr          #+#    #+#             */
/*   Updated: 2024/08/06 19:58:03 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../inc/push_swap.h"

void	init_data(char **nbr, t_stack **a)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	new_node->next = NULL;
	new_node->prev = NULL;
}

void	init_stack(char **nbr, t_stack **a)
{
	int		i;
	long	n;

	i = -1;
	while (nbr[++i])
	{
		n = ft_atol_ps(nbr[i]);
		init_data(nbr, a);
	}
}