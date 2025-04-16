/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:26:16 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/16 20:23:49 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_stack(t_list **stack)
{
	t_list	*temp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	*stack = NULL;
}

void	double_ra(t_list **stack_a)
{
	if (!stack_a)
		return ;
	ra(stack_a, "");
	ra(stack_a, "ra");
	return ;
}

int	find_position(t_list *stack, int index)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->index == index)
			return (pos);
		stack = stack->next;
		pos++;
	}
	return (-1);
}

void	is_null(char **argv, int argc)
{
	int	i;

	i = 0;
	if (argc <= 1)
		exit(1);
	while (i < argc)
	{
		if (!argv[i][0])
		{
			ft_putendl_fd("Error", 2);
			exit(10);
		}
		i++;
	}
	return ;
}
