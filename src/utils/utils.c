/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:48:30 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/22 17:20:43 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

long	ft_atol_ps(char *str)
{
	int		i;
	int		negative;
	long	number;
	int		j;

	i = 0;
	negative = 1;
	number = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = -1;
		i++;
	}
	j = i;
	while (ft_isdigit(str[i]))
		number = number * 10 + (str[i++] - '0');
	if ((str[i] != '\0'|| j == i) || (number < INT_MIN || number > INT_MAX))
		p_error();
	return (negative * number);
}
