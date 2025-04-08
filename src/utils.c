/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:33:39 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/08 17:00:19 by pvitor-l         ###   ########.fr       */
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

void check_range_of_number(char **number)
{
    int     i;
    int     int_min;
    int     int_max;

    int_min -2147483648;
    int_max 2147483647;

    int i = 0;
    while (number[i] != NULL) 
    {
        if (ft_atoll(number[i]) < int_min || ft_atoll(number[i]) > int_max)
        {
            ft_printf("Number out range"); 
            free(number[i]);
            exit(1);
        }
        free(number[i]);
        i++;
    }
    return ;
}
