/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ 
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:23:51 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/13 18:38:54 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int     main(int argc, char **argv)
{
    t_list  *stack_a;  
//  t_list  *stack_b;
    check_arguments(argc, argv);
    stack_a = NULL;
    stack_a = (t_list *)malloc(sizeof(t_list));
    list_sort(stack_a);
    init_stack(argv, stack_a);
    stack_a->size = get_stack_size(stack_a);
    return (0);
}


t_list  *init_stack(char **argv, t_list *stack_a)
{
    int    i;
    char    **args;
    t_list  *new_node;
    t_list  *temp = NULL;

    i = 0;
    args = ft_split(argv[1], ' ');
    while (args[i] != NULL)
    {
        new_node = creat_node(ft_atoi(args[i]));
        if (!new_node)
        {
            while (stack_a == NULL) 
            {
                *temp = *stack_a;  
                stack_a = stack_a->next;
                free(temp);
            }
            return (NULL);
        }
        push_back(&stack_a, new_node);
        i++;
    }
    free_array(args);
    return (stack_a);
}

void    check_arguments(int argc, char **argv)
{
    long    num;
    int     i;
    char    **args;

    i = 0;
    if (argc != 2 || argv == NULL )
        ft_error("ERRORS invalid arguments", 7);
    args = ft_split(argv[1], ' ');
    if (args == NULL)
        ft_error("ERRORS memory alocation failed", 9);
    check_range_of_number(args);
    while (args[i] != NULL)
    {
        if(!ft_isnum(args[i]))
        {
            free_array(args);
            ft_error("ERROR don't is number", 5);
        }
	num = ft_atoi(args[i]);
    	check_double(args, num, i);
    	i++;
    }
    free_array(args);
    return ;
}
