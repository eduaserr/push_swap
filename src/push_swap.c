/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:40:16 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/05 21:51:19 by eduaserr         ###   ########.fr       */
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
	nbr = NULL;
	if (argc > 1)
		ft_check_input(argc, argv, nbr, &a);
	if (!is_sorted(a))
		sort_algorithm(a, b);
	free_stack(&a);
	return (0);
}