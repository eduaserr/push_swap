/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:21:56 by eduaserr          #+#    #+#             */
/*   Updated: 2024/08/08 21:10:51 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../inc/push_swap.h"

void	ft_check_input(int argc, char **argv, char **nbr, long n)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (argc == 2)
		{
			if (!argv[1][0] || ((argv[1][0] == '-'
				|| argv[1][0] == '+') && !argv[1][1]))
				p_error();
			nbr = ft_split(argv[1], ' ');
			if (!nbr)
				p_error();
		}
		else
		{
			nbr = ft_split(argv[i], ' ');
			//nbr = argv[i];
			if (!nbr)
				p_error();
		}
		get_nbrs(nbr, n);
		free_array(nbr);
		nbr = NULL;
	}
}

void	**get_nbrs(char **nbr, long n)
{
	int		i;

	i = -1;
	while (nbr[++i])
	{
		n = ft_atol_ps(nbr[i]);
		if ((n < INT_MIN || n > INT_MAX)
			|| (nbr[i + 1] && n == ft_atol_ps(nbr[i + 1])))
				p_error();
	}
}
