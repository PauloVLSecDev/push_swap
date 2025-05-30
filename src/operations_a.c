/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:33:19 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/16 19:40:20 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b, char *str)
{
	t_list	*temp;

	if (!*stack_b)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = *stack_a;
	*stack_a = temp;
	if (str)
		ft_printf("%s\n", str);
	return ;
}

void	sa(t_list **stack_a, char *str)
{
	int		temp;
	t_list	*first;
	t_list	*second;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	second = first->next;
	temp = first->value;
	first->value = second->value;
	second->value = temp;
	if (str)
		ft_printf("%s\n", str);
	return ;
}

void	ra(t_list **stack_a, char *str)
{
	t_list	*first;
	t_list	*last;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	*stack_a = first->next;
	last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	if (str)
		ft_printf("%s\n", str);
	return ;
}

void	rra(t_list **stack_a, char *str)
{
	t_list	*current;
	t_list	*previous;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	current = *stack_a;
	previous = NULL;
	while (current->next != NULL)
	{
		previous = current;
		current = current->next;
	}
	current->next = *stack_a;
	previous->next = NULL;
	*stack_a = current;
	if (str)
		ft_printf("%s\n", str);
	return ;
}
