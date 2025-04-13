/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ 
/*   t_list_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:13:22 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/13 15:47:27 by pvitor-l         ###   ########.fr       */
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
		if (current->value > current->next->value)	
			return (0);
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

void normalize_stack(t_list **stack_a)
{
    t_list *current;
    int min_value;
    
    current = *stack_a;
    min_value = current->value;
    while (current)
    {
        if (current->value < min_value)
            min_value = current->value;
        current = current->next;
    }
    current = *stack_a;
    while (current)
    {
        current->value -= min_value;
	current = current->next;
    }
}

int get_stack_size(t_list *stack)
{
    int size = 0;
    
    while (stack)
    {
        size++;
        stack = stack->next;
    }
    return (size);
}




