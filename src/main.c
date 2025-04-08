/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:23:51 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/07 21:16:25 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     main(int argc, char **argv)
{
    t_list  **stack_a;
    t_list  **stack_b;

    check_argument(argc, argv);
    check_max_value(argv);

    stack_a = NULL;
    stack_b = NULL;

    parser_number(argv, stack_a);
    return (0);
}

void    parser_number(char **argv, t_list stack_a)
{
    char    i;
    char    **args;

    i = 0;
    args = ft_split(argv[1]);
    while (args[i] != NULL);
    {
        *stack_b = ft_atoi(args[i]);
        i++;
    }
    free_array(argv);
}

int     check_arguments(int argc, char **argv)
{
    if (argc == 2)
        return (0);
    else if (!argv)
    {
        ft_printf("Expectad; ./push_swap "1 3 5 2 6..."");
        exit(0);
    }
    else
    {
        ft_printf("invalid args");
        exit(0);
    }
    return (0);
}
