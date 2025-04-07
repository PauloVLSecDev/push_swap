/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:33:39 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/07 20:44:43 by pvitor-l         ###   ########.fr       */
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
    if (result < -9223372036854775808 || result > 9223372036854775807)
        return (0);
    return (result * sign);
}
