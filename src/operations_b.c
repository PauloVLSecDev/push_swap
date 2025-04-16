/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:40:17 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/16 20:05:47 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pb(t_list **stack_a, t_list **stack_b, char *str)
{
	t_list	*temp;

	if (!*stack_a)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	*stack_b = temp;
	if (str)
		ft_printf("%s\n", str);
	return ;
}

void	sb(t_list **stack_b, char *str)
{
	int		temp;
	t_list	*first;
	t_list	*second;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	first = *stack_b;
	second = first->next;
	temp = first->value;
	first->value = second->value;
	second->value = temp;
	if (str)
		ft_printf("%s\n", str);
	return ;
}

void	rb(t_list **stack_b, char *str)
{
	t_list	*first;
	t_list	*last;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	first = *stack_b;
	*stack_b = first->next;
	last = *stack_b;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	if (str)
		ft_printf("%s\n", str);
	return ;
}

void	rrb(t_list **stack_b, char *str)
{
	t_list	*current;
	t_list	*previous;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	current = *stack_b;
	previous = NULL;
	while (current->next != NULL)
	{
		previous = current;
		current = current->next;
	}
	current->next = *stack_b;
	previous->next = NULL;
	*stack_b = current;
	if (str)
		ft_printf("%s\n", str);
	return ;
}
