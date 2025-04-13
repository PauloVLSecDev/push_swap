/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:53:56 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/13 18:37:36 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    sort_three(t_list *stack)
{
    int size;
    if (size != 2)
    {
        if (stack->size == 2)
            rotate_a(stack);
    }
    if (stack->value > stack->next->value)
            sa(stack);
}

void    sort_five(t_list **stack)
{
            
}
