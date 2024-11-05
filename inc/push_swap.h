/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:00:33 by eduaserr          #+#    #+#             */
/*   Updated: 2024/11/05 19:29:00 by eduaserr         ###   ########.fr       */
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
	int				is_upper_side;
	struct s_stack	*target;
	struct s_stack	*next;
}			t_stack;

/*	### OPERATIONS ###	*/
/*	push	*/
void	push(t_stack **src, t_stack **dst);

void	pa(t_stack **a, t_stack **b);

void	pb(t_stack **a, t_stack **b);
/*	rotate	*/
void	rotate(t_stack **a);

void	ra(t_stack **a);

void	rb(t_stack **b);

void	rr(t_stack **a, t_stack **b);
/*	rrotate	*/
void	rrotate(t_stack **a);

void	rra(t_stack **a);

void	rrb(t_stack **b);

void	rrr(t_stack **a, t_stack **b);
/*	swap	*/
void	swap(t_stack **a);

void	sa(t_stack **a);

void	sb(t_stack **b);

void	ss(t_stack **a, t_stack **b);

/*	### SORT ###	*/
/*	sort_costs	*/
void	get_index(t_stack *stack);

void	get_cost(t_stack *a, t_stack *b);

t_stack	*cheapest(t_stack *stack);

void	cost_analysis(t_stack **a, t_stack **b);
/*	sort_stack	*/
void	a_targets(t_stack *a, t_stack *b);

void	b_targets(t_stack *a, t_stack *b);

void	move_to_b(t_stack **a, t_stack **b, t_stack *cheapest);

void	move_to_a(t_stack **a, t_stack **b);

void	minvalue_ontop(t_stack **a);
/*	sort_utils	*/
int		is_sorted(t_stack *a);
/*	sort	*/
void	sort_three(t_stack **a);

void	sort_big(t_stack **a, t_stack **b);

void	sort_algorithm(t_stack **a, t_stack **b);

/*	### STACK ###	*/
/*	stack_init	*/
t_stack	*ft_lstnew_ps(long content);

t_stack	*ft_lstlast_ps(t_stack *stack);

void	ft_lstadd_back_ps(t_stack **stack, t_stack *node);

void	init_stack(long n, t_stack **a);
/*	stack_utils	*/
int		ft_stacklen(t_stack *stack);

t_stack	*min_stack(t_stack *stack);

t_stack	*max_stack(t_stack *stack);

/*	### UTILS ###	*/
/*	utils_error	*/
void	p_error(void);

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