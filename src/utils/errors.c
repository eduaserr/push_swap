/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:18:46 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/25 17:04:41 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

void	p_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	if (!array)
		return ;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	free_stack(t_stack **stack)
{
	t_stack	*node;
	t_stack	*swp;

	if (!(stack) || !*(stack))
		return ;
	node = *stack;
	while (node)
	{
		swp = node->next;
		node->value = 0;
		node->index = 0;
		node->cost = 0;
		node->is_upper_side = 0;
		node->mid = 0;
		node->to_mid = 0;
		if (node->target)
			node->target = NULL;
		free(node);
		node = swp;
	}
	*stack = NULL;
}
