/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ /*   t_list_utils.c                                     :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:13:22 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/12 20:08:45 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	list_sort(t_list *stack)
{
	t_list *current;
	
	current = stack;
	if(stack == NULL || stack->next == NULL)
	while (current->next != NULL)
	{
		if (current->value > current->next->value)	return (0);
		current = stack->next;
	}
	return (1);
}

t_list	*creat_node(int value)
{
	t_list *new_node;
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

void	push_back(t_list **stack, t_list *new_node)
{
	t_list *current;

	if (!new_node)	
		return;
	if(*stack == NULL)
	{
		*stack = new_node;
		return ;
	}
	
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	current = new_node;
}
















