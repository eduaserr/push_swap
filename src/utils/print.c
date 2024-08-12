/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:18:46 by eduaserr          #+#    #+#             */
/*   Updated: 2024/08/09 16:04:45 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../inc/push_swap.h"

void	p_error()
{
	ft_putstr_fd("Error", 2);
	exit(EXIT_FAILURE);
}

void	*free_array(char ***str)
{
	int i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

void	*free_stack(t_stack **stack)
{
	t_stack	*node;
	t_stack	*swp;

	if (!(stack))
		return (NULL);
	node = *stack;
	while (node)
	{
		swp = node->next;
		node->value = 0;
		node->index = 0;
		node->cost = 0;
		node->top = 0;
		node->mid = 0;
		node->to_mid = 0;
		node->bottom = 0;
		if (node->target)
			node->target = NULL;
		free(node);
		node = swp;
	}
	*stack = NULL;
}
