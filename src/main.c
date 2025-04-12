/* ************************************************************************** */
/*                                                                            */ /*                                                        :::      ::::::::   */ /*   main.c                                             :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:23:51 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/11 20:24:22 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/push_swap.h"

int     main(int argc, char **argv)
{
    int clear;

    clear = 0;
    check_arguments(argc, argv, clear);
//  t_list  **stack_a;
//  t_list  **stack_b;

//  stack_a = NULL; //  stack_b = NULL;
//  parser_number(argv, stack_a);
    return (0);
}

/*
void    parser_number(char **argv, t_list stack_a)
{
    char    i;
    char    **args;

    i = 0;
    args = ft_split(argv[1], ' ');

    while (args[i] != NULL);
    {
        stack_b = ft_conectlist(ft_atoi(args[i]));
        i++;
    }
    free_array(argv);
*/

void    check_arguments(int argc, char **argv, int clear)
{
    long    num;
    int     i;
    char    **args;

    i = 0;
    if (argc != 2)
        ft_error("ERRORS invalid arguments", 7);
    if (argv == NULL)
        ft_error("ERRORS invalid arguments", 7);
    args = ft_split(argv[1], ' ');
    while (args[i] != NULL)
    {
	num = ft_atoi(args[i]);
        if (ft_isnum(args[i]))
                clear = 1;
        check_range_of_number(args);
    	check_double(args, num, i);
    	i++;
    }
    if (clear == 1 || !args)
    {
        free_array(args);
    }
    return ;
}
