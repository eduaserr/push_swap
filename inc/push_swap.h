/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:00:33 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/23 14:24:37 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				cost;
	int				mid;
	int				is_upper_side;
	struct s_stack	*target;
	struct s_stack	*next;
}			t_stack;

/*	### OPERATIONS ###	*/
/*	push	*/
void	push(t_stack **src, t_stack **dst);

void	pa(t_stack *a, t_stack *b);

void	pb(t_stack *a, t_stack *b);
/*	rotate	*/
/*	rrotate	*/
/*	swap	*/
void	swap(t_stack **a);

void	sa(t_stack *a);

void	sb(t_stack *b);

void	ss(t_stack *a, t_stack *b);

/*	### SORT ###	*/
/*	sort_utils	*/
int		is_sorted(t_stack *a);
/*	sort	*/
void	sort_three(t_stack *a);

void	sort_big(t_stack *a, t_stack *b);

void	sort_algorithm(t_stack *a, t_stack *b);

/*	### STACK ###	*/
/*	stack_init	*/
void	init_stack(long n, t_stack **a);
/*	stack_utils	*/
t_stack	*ft_lstnew_ps(long content);

t_stack	*ft_lstlast_ps(t_stack *stack);

void	ft_lstadd_back_ps(t_stack **stack, t_stack *node);

int		ft_stacklen(t_stack *stack);

/*	### UTILS ###	*/
/*	utils_error	*/
void	p_error();

void	ft_free(char **str);

void	ft_freestack(t_stack **stack);
/*	utils_parse_input	*/
int		check_args(char *str);

void	get_nbrs_and_check_dup(char **nbr, t_stack **a);

void	parse_input(int argc, char **argv, t_stack **a);
/*	utils	*/
long	ft_atol_ps(char *str);

/*	### MAIN ###	*/
int		main(int argc, char **argv);

void	printfullstack(char *str, t_stack *stack);

#endif