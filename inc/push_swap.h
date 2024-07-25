/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:40:22 by eduaserr          #+#    #+#             */
/*   Updated: 2024/07/25 19:33:53 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct list
{
	int		value;
	int		index;
	int		top;
	int		mid;
	int		pos_to_mid;
	int		bottom;
}		t_list;

#endif