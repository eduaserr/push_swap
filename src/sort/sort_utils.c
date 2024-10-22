/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:45:15 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/22 12:03:07 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	is_sorted(t_stack *a)
{
	if (!a)
		return (ft_printf("no esta ordenado"), 0);
	while (a->next)
	{
		if (a->value > a->next->value)
			return (ft_printf("no esta ordenado"), 0);
		a = a->next;
	}
	return (ft_printf("si esta ordenado"), 1);
}
