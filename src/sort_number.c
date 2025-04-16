/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:53:56 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/16 18:42:39 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_two(t_list **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
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
		sa(stack);
		rra(stack);
	}
	else if (first > second && second < third && first > third)
		ra(stack);
	else if (first > second && second < third && first < third)
		sa(stack);
	else if (first < second && second > third && first < third)
	{
		sa(stack);
		ra(stack);
	}
	else if (first < second && second > third && first > third)
		rra(stack);
	return ;
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int	pos;
	int	i;

	i = 0;
	pos = find_position(*stack_a, 0);
	if (pos == 1)
		sa(stack_a);
	else if (pos == 2)
		double_ra(stack_a);
	else if (pos == 3)
		rra(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

/*
void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	pos;
	int	i;

	i = 0;
	while (i < 2)
	{
		pos = find_position(*stack_a, i);
		if (pos == 1)
			sa(stack_a);
		else if (pos == 2)
			double_ra(stack_a);
		else if (pos == 3 && get_stack_size(*stack_a) > 3)
		{
			rra(stack_a);
			rra(stack_a);
		}
		else if (pos >= 3)
			rra(stack_a);
		pb(stack_a, stack_b);
		i++;
	}
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
*/

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
				ra(stack_a);
		}
		else
		{
			while (pos++ < size)
				rra(stack_a);
		}
		pb(stack_a, stack_b);
		i++;
	}
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
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
