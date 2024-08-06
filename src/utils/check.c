/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:21:56 by eduaserr          #+#    #+#             */
/*   Updated: 2024/08/06 19:27:18 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../inc/push_swap.h"

void	ft_check_input(int argc, char **argv, char **nbr)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argc == 2)
		{
			if (!argv[1][0] || (argv[1][0] == '-'
				|| argv[1][0] == '+') && !argv[1][1])
				p_error();
			nbr = ft_split(argv[1], ' ');
			nbr = get_numbers(nbr[i]);
		}
		else
		{
			nbr = get_numbers(argv[i]);
		}
		i++;
		//if (argc == 2)
		//	array_free(nbr);
	}
}

char	**get_numbers(char **nbr)
{
	int		i;
	int		j;

	i = 0;
	while (nbr[i])
	{
		j = i + 1;
		ft_atol_ps(nbr[i]);
		while (nbr[j])				// check repeat
		{
			if (ft_atol_ps(nbr[i]) == ft_atol_ps(nbr[j])
				|| (ft_atol_ps(nbr[i]) > INT_MAX)
					|| (ft_atol_ps(nbr[j]) < INT_MIN))
				p_error();
			j++;
		}
		i++;
	}
	return (nbr);
}
