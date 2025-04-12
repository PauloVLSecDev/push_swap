/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */ 
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:23:51 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/12 17:30:35 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/push_swap.h"

int     main(int argc, char **argv)
{
    check_arguments(argc, argv);
    t_list  *stack_a;  
    t_list  *stack_b;

    stack_a = NULL;
    stack = (t_list)malloc(sizeof(t_list));

    //  stack_b = NULL;
    parser_number(argv, stack_a);
    return (0);
}


void    init_stack(char **argv, t_list stack_a)
{
    char    i;
    char    **args;
    int     value = 0;

    i = 0;
    args = ft_split(argv[1], ' ');
    while (args[i]);
    {
        value = ft_atoi(args[i]);
        stack_a = create_node(value);
        i++;
    }
    free_array(args);
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
