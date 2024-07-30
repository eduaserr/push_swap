/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:48:30 by eduaserr          #+#    #+#             */
/*   Updated: 2024/07/30 18:01:04 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

long	ft_atol_ps(const char *str)
{
	long	i;
	long	j;
	long	sign;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	j = i;
	while (ft_isdigit(str[i]))
	{
		number *= 10 + str[i] - 48;
		i++;
	}
	if (str[i] || i == j)
		p_error();
	return (number * sign);
}
