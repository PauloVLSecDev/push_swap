/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Both_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:22:18 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/16 20:10:05 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	sa(stack_a, "");
	sb(stack_b, "ss");
	return ;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	ra(stack_a, "");
	rb(stack_b, "rr");
	return ;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	rra(stack_a, 0);
	rrb(stack_b, "rrr");
	return ;
}
