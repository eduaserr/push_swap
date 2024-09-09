/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:48:30 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/09 12:57:34 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

long	ft_atol_ps(const char *str)
{
	long	i;
	long	j;
	long	sign;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	while (ft_isspace(str[i]))
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
		number = number * 10 + str[i] - 48;
		i++;
	}
	if (str[i] || i == j)
		p_error();
	return (number * sign);
}
