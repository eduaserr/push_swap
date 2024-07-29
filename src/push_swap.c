/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:40:16 by eduaserr          #+#    #+#             */
/*   Updated: 2024/07/29 19:51:59 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../inc/push_swap.h"

int main(int argc,char **argv)
{
	char	**numbers;
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	numbers = 0;
	if (argc > 1)
	init_data(argc, argv, numbers);
}