/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_parse_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:55:55 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/16 20:08:26 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	get_nbrs(char **nbr, t_stack **a)
{
	long	n;

	n = 0;
	check_dup(nbr, n);
	init_stack(n, a);
}

void	check_dup(char **nbr, long n)
{
	int		i;
	int		j;

	i = 0;
	while (nbr[i])
	{
		n = ft_atol_ps(nbr[i]);
		j = i + 1;
		while (nbr[j])
		{
			if (n == ft_atol_ps(nbr[j]))
				p_error();
			j++;
		}
		i++;
	}
}

void	parse_input(int argc, char **argv, t_stack **a)
{
	char **nbr;

	nbr = NULL;
	if (argc == 2)
	{
		if ((!argv[1][0]) || ((argv[1][0] == '+' 
			|| argv[1][0] == '-') && !argv[1][1]))
			p_error();
		nbr = ft_split(argv[1], ' ');
	}
	else
		nbr = argv + 1;
	get_nbrs(nbr, a);
	if (argc == 2)
	{
		ft_free(nbr);
		nbr = NULL;
	}
}
