/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:34:25 by eduaserr          #+#    #+#             */
/*   Updated: 2024/10/17 19:22:23 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_stack	*ft_lstnew_ps(long content)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->value = content;
	node->next = NULL;
	return (node);
}

t_stack	*ft_lstlast_ps(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	ft_lstadd_back_ps(t_stack **stack, t_stack *node)
{
	if (!(*stack))
		*stack = node;
	else
		ft_lstlast_ps(*stack)->next = node;
}

int	ft_stacklen(t_stack *stack)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	printfullstack(char *str, t_stack *stack)
{
	t_stack *node;

	if (!stack)
		ft_printf("NULL");
	node = stack;
	ft_printf("%s", str);
	while (node)
	{
		ft_printf("	v %d\n", node->value);
		ft_printf("		i %d\n", node->index);
		ft_printf("		c %d\n", node->cost);
		ft_printf("		uod %d\n", node->is_upper_side);
		ft_printf("		mid %d\n", node->mid);
		if (node->target)
			ft_printf("		target val %d\n", node->target->value);
		node = node->next;
	}
}
