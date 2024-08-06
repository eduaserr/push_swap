/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:40:16 by eduaserr          #+#    #+#             */
/*   Updated: 2024/08/06 19:28:19 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	char	**nbr;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	nbr = 0;
	if (argc > 1)
	{
		ft_check_input(argc, argv, nbr);
		init_data(nbr, &a);
		sort();
	}
	return (0);
}