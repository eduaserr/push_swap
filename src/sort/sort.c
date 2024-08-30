/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:39:55 by eduaserr          #+#    #+#             */
/*   Updated: 2024/08/30 14:06:32 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../inc/push_swap.h"

void	sort(t_stack **a, t_stack **b)
{
	if (is_sorted(*a) && !b)
		return ;
	if (ft_stacklen(*a) == 2)
		sa(*a);
	else if (ft_stacklen(*a) == 3)
	{
		while (!(is_sorted(*a)))
			sort_three(a);
	}
	else if (!is_sorted(*a))
		sort_big();
}