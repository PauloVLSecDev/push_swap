/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:23:51 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/08 17:40:31 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     main(int argc, char **argv)
{
    t_list  **stack_a;
    t_list  **stack_b;

    stack_a = NULL;
    stack_b = NULL;

    check_argument(argc, argv);
    parser_number(argv, stack_a);
    return (0);
}

void    parser_number(char **argv, t_list stack_a)
{
    char    i;
    char    **args;

    i = 0;
    args = ft_split(argv[1], ' ');

    check_range_of_number(args);
    while (args[i] != NULL);
    {
        stack_b = ft_conectlist(ft_atoi(args[i]));
        i++;
    }
    free_array(argv);
}

void    check_arguments(int argc, char **argv)
{
    if (argc == 2)
        return ;
    else if (!argv || **argv == '\0')
    {
        ft_printf("Expected; ./push_swap "1 3 5 2 6..."");
        exit(0);
    }
    else
    {
        ft_printf("invalid args");
        exit(0);
    }
    return ;
}
