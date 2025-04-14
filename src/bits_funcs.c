/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:33:31 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/14 17:00:54 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_max_bits(t_list *stack)
{
	int	max_index;
	int	max_bits;

	max_index = 0;
	max_bits = 0;
	while (stack)
	{
		if (stack->index > max_index)
			max_index = stack->index;
		stack = stack->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}
