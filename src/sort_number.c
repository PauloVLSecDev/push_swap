/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:53:56 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/16 20:27:26 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_two(t_list **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		sa(stack, "sa");
}

void	sort_three(t_list **stack)
{
	int	first;
	int	second;
	int	third;

	first = (*stack)->value;
	second = (*stack)->next->value;
	third = (*stack)->next->next->value;
	if (first > second && second > third)
	{
		sa(stack, "sa");
		rra(stack, "rra");
	}
	else if (first > second && second < third && first > third)
		ra(stack, "ra");
	else if (first > second && second < third && first < third)
		sa(stack, "sa");
	else if (first < second && second > third && first < third)
	{
		sa(stack, "sa");
		ra(stack, "ra");
	}
	else if (first < second && second > third && first > third)
		rra(stack, "rra");
	return ;
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int	pos;
	int	i;

	i = 0;
	pos = find_position(*stack_a, 0);
	if (pos == 1)
		sa(stack_a, "sa");
	else if (pos == 2)
	{
		ra(stack_a, "ra");
		ra(stack_a, "ra");
	}
	else if (pos == 3)
		rra(stack_a, "rra");
	pb(stack_a, stack_b, "pb");
	sort_three(stack_a);
	pa(stack_a, stack_b, "pa");
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	pos;
	int	size;
	int	i;

	i = 0;
	while (i < 2)
	{
		size = get_stack_size(*stack_a);
		pos = find_position(*stack_a, i);
		if (pos <= size / 2)
		{
			while (pos-- > 0)
				ra(stack_a, "ra");
		}
		else
		{
			while (pos++ < size)
				rra(stack_a, "rra");
		}
		pb(stack_a, stack_b, "pb");
		i++;
	}
	sort_three(stack_a);
	pa(stack_a, stack_b, "pa");
	pa(stack_a, stack_b, "pa");
}

void	sort_small(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = get_stack_size(*stack_a);
	if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
}
