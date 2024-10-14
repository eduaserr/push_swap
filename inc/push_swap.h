/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:00:33 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/14 19:11:52 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft.h"
# include <limits.h>

typedef struct s_stack
{
	long			value;
	int				index;
	int				cost;
	int				mid;
	int				is_upper_side;
	struct s_stack	*target;
	struct s_stack	*next;
}			t_stack;

/*	### STACK ###	*/
/*	stack_init	*/
void	init_stack(long n, t_stack **a);
/*	stack_utils	*/
t_stack	*ft_lstnew_ps(long	content);

/*	### UTILS ###	*/
/*	utils_error	*/
void	p_error();

void	ft_free(char **str);

void	ft_freestack(t_stack **stack);
/*	utils_parse_input	*/
void	get_nbrs(char **nbr, t_stack **a);

void	check_dup(char **nbr, long n);

void	parse_input(int argc, char **argv, t_stack **a);
/*	utils	*/
long	ft_atol_ps(char *str);

/*	### MAIN ###	*/
int		main(int argc, char **argv);
#endif