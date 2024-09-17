/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:40:22 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/17 18:50:11 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				cost;
	int				top;
	int				mid;
	int				to_mid;
	int				*target;
	struct s_stack	*next;
}		t_stack;

	/*		### operations ###	*/
			/*	push	*/
void	push(t_stack **src, t_stack **dst);

void	pa(t_stack **a, t_stack **b);

void	pb(t_stack **a, t_stack **b);
			/*	rotate	*/
void	rotate(t_stack **stack);

void	ra(t_stack **a);

void	rb(t_stack **b);

void	rr(t_stack **a, t_stack **b);
			/*	rrotate	*/
void	rrotate(t_stack **stack);

void	rra(t_stack **a);

void	rrb(t_stack **b);

void	rrr(t_stack **a, t_stack **b);
			/*	swap	*/
void	swap(t_stack **stack);

void	sa(t_stack **a);

void	sb(t_stack **b);

void	ss(t_stack **a, t_stack **b);

	/*		### push_swap ###	*/
int		main(int argc, char **argv);

	/*		### sort ###		*/
			/*	sort_big	*/
void	stack_a_targets(t_stack *a, t_stack *b);

void	stack_b_targets(t_stack *a, t_stack *b);

void	sorting_b(t_stack *a, t_stack *b);
			/*	sort	*/
void	sort_algorithm(t_stack *a, t_stack *b);

void	sort_three(t_stack **stack);

void	sort_big(t_stack **a, t_stack **b);
			/*	utils_sort	*/
int		is_sorted(t_stack *stack);

	/*		### stack ###		*/
			/*	init	*/
void	init_stack(t_stack **a, long n);
			/*utils_stack*/
t_stack	*ft_lstlast_ps(t_stack *stack);

t_stack	*ft_lstnew_ps(long n);

int		ft_stacklen(t_stack *stack);

t_stack	*min_stack(t_stack *stack);

t_stack	*max_stack(t_stack *stack);

	/*		### utils ###		*/
			/*	check	*/
void	ft_check_input(int argc, char **argv, t_stack **a);

void	get_nbrs(char **nbr, t_stack **a);
			/*	print	*/
void	free_stack(t_stack **stack);

void	free_array(char **str);

void	p_error(void);
			/*	utils	*/
long	ft_atol_ps(char *str);

#endif