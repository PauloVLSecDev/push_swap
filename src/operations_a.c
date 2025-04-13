/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:33:19 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/13 19:15:19 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    pa(t_list **stack_a, t_list **stack_b)
{
   t_list *temp; 

   if (!*stack_b)
       return ;
   temp = *stack_b;
   *stack_b = (*stack_b)->next;

   temp->next = *stack_a;
   *stack_a = temp;
    ft_printf("pa");
   return ;
}

void sa(t_list **stack_a)
{
    int     temp;
    t_list *first;
    t_list *second;
    
    if (!*stack_a || !(*stack_a)->next)
        return ;
    if (stack->size > 1)
    {
        first = *stack_a;
        second = first->next;

        temp = first->value;
        first->value = second->value;
        second->value = temp;
        ft_printf("sa");
    }
    return ;
}

void    ra(t_list **stack_a)
{
    t_list *first;
    t_list *last;
    
    if (!*stack_a || !(*stack_a)->next)
        return ;
    
    first = *stack_a;
    
    *stack_a = first->next;
    
    last = *stack_a;
    while (last->next != NULL)
        last = last->next;
    
    last->next = first;
    first->next = NULL;
}
    
void    rra(t_list **stack_a)
{

}
