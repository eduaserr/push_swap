/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:44:27 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/28 15:11:57 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	p_error(void)
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_freestack(t_stack **stack)
{
	t_stack	*swp;

	if ((!stack) || (!*stack))
		return ;
	while (*stack)
	{
		swp = (*stack)->next;
		if ((*stack)->target)
		{
			free((*stack)->target);
			(*stack)->target = NULL;
		}
		free(*stack);
		*stack = swp;
	}
	*stack = NULL;
}
