/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:56:56 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/16 19:59:58 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	//t_stack	*b;

	a = NULL;
	//b = NULL;
	if (argc > 1)
	{
		parse_input(argc, argv, &a);
	}
	return (0);
}
