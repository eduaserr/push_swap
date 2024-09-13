/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:21:56 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/13 19:02:39 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libft.h"
#include "../../inc/push_swap.h"

void	get_nbrs(char **nbr, t_stack **a)
{
	int		i;
	int		j;
	long	n;

	n = 0;
	i = -1;
	j = 0;
	while (nbr[++i])
	{
		n = ft_atol_ps(nbr[i]);
		j = i;
		while (nbr[++j])
		{
			if (n == ft_atol_ps(nbr[j]))
			{
				free_stack(a);
				p_error();
			}
		}
		init_stack(a, n);
	}
}

void	ft_check_input(int argc, char **argv, t_stack **a)
{
	char	**nbr;

	nbr = NULL;
	if (argc == 2)
	{
		if ((argv[1][0] == '-' || argv[1][0] == '+') && !argv[1][1])
			p_error();
		nbr = ft_split(argv[1], ' ');
	}
	else
		nbr = argv + 1;
	get_nbrs(nbr, a);
	if (argc == 2)
	{
		free_array(nbr);
		nbr = NULL;
	}
}
