/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:21:56 by eduaserr          #+#    #+#             */
/*   Updated: 2024/07/30 21:18:14 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../inc/push_swap.h"

void	ft_check(int argc, char **argv, char **nbr, t_stack *a)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		get_numbers(argc, argv[i], a);
		i++;
	}
}
void	get_numbers(int argc, char **argv, char **nbr)
{
if (argc == 2)
	{
		if (!argv[1][0] || (argv[1][0] == '-'
			|| argv[1][0] == '+') && !argv[1][1])
			p_error();
		nbr = ft_split(argv[1], ' ');
	}
	check_numbers(nbr);
}

void	check_numbers(char **nbr)
{
	int	i;
	int	j;

	i = 0;
	if ((nbr[i] == '-' || nbr[i] == '+') && nbr[i + 1])
		i++;
	while (nbr[i])
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	while (nbr[i])
	{
		j = i + 1;
		ft_atol_ps(nbr[i]);
		while (nbr[j])
		{
			if(nbr[i] == nbr[j])
				p_error();
			j++;
		}
		i++;
	}
}
