/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ 
/*   t_list_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:13:22 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/14 15:49:36 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*creat_node(int value)
{
	t_list *new_node;
	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}

void	push_back(t_list **stack, t_list *new_node)
{
	t_list	*temp;

	if (!*stack)
	{
		*stack = new_node;
		return ;
	}
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
}

void	normalize_stack(t_list **stack_a)
{
	t_list	*current;
	t_list	*temp;
	int		index;

	current = *stack_a;
	while (current)
	{
		index = 0;
		temp = *stack_a;
		while (temp)
		{
			if (current->value > temp->value)
				index++;
			temp = temp->next;
		}
		current->index = index;
		current = current->next;
	}
}

int	list_sort(t_list *stack)
{
	t_list	*current;

	if (!stack || !stack->next)
		return (1);
	current = stack;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int get_stack_size(t_list *stack)
{
    int size;
    
    size = 0;
    while (stack)
    {
        size++;
        stack = stack->next;
    }
    return (size);
}
