/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:33:39 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/07 21:47:04 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


long long     ft_atoll(char *str)
{
    long  sign;
    long long result;

    sing = 1;
    if (*str == '-')
    {
        sign = -1;
        *str++;
    }
    while (*str == ' ' || *str == '\t' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
        result = result * 10 + *str++ - '0';
    return (result * sign);
}

void check_range_of_number(char **argv)
{
    int int_min;
    int int_max;

    int_min -2147483648;
    int_max 2147483647;

    if (ft_atoll(argv) < int_min || ft_atoll(argv) > int_max)
    {
           ft_printf("Number out range"); 
           exit(1);
    }
    return ;
}
