/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:40:22 by eduaserr          #+#    #+#             */
/*   Updated: 2024/08/30 19:42:10 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <limits.h>

typedef struct s_stack
{
	long			value;
	int				index;
	int				cost;
	int				top;
	int				mid;
	int				to_mid;
	int				*target;
	struct s_stack	*next;
}		t_stack;

	/*		### operations ###	*/
			/*	swap	*/
void	swap(t_stack **stack);

void	sa(t_stack **a);

void	sb(t_stack **b);

void	ss(t_stack **a, t_stack **b);

	/*		### push_swap ###	*/
int		main(int argc, char **argv);

	/*		### sort ###		*/
			/*	sort	*/
void	sort(t_stack **a, t_stack **b);
			/*	utils_sort	*/
int		is_sorted(t_stack *stack);

	/*		### stack ###		*/
			/*	init	*/
void	init_stack(t_stack **a, long n);
			/*utils_stack*/
t_stack	*ft_lstlast_ps(t_stack *stack);

t_stack	*ft_lstnew_ps(long n);

int		ft_stacklen(t_stack *stack);

	/*		### utils ###		*/
			/*	check	*/
void	ft_check_input(int argc, char **argv, char **nbr, t_stack **a);

void	**get_nbrs(char **nbr, t_stack **a);
			/*	print	*/
void	*free_stack(t_stack **stack);

void	*free_array(char ***str);

void	p_error();
			/*	utils	*/
long	ft_atol_ps(const char *str);

#endif