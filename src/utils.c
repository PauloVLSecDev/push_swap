/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:33:39 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/16 21:16:36 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

long long	ft_atoll(char *str)
{
	int			sign;
	long long	result;

	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '+')
		str++;
	while (ft_isdigit(*str))
		result = result * 10 + (*str++ - '0');
	return (result * sign);
}

void	check_range_of_number(char **number, char *str)
{
	int	int_min;
	int	int_max;
	int	i;

	int_min = -2147483648;
	int_max = 2147483647;
	i = 0;
	while (number[i] != NULL)
	{
		if (ft_atoll(number[i]) < int_min || ft_atoll(number[i]) > int_max)
			ft_error("Error", 8, str);
		i++;
	}
	return ;
}

void	check_double(char **args, int num, int i, char *str)
{
	i++;
	while (args[i])
	{
		if (ft_atoi(args[i]) == num)
		{
			free_array(args);
			ft_error("Error", 6, str);
		}
		i++;
	}
	return ;
}

int	ft_isnum(char *args)
{
	int	i;

	i = 0;
	if (args[0] == '-')
		i++;
	if (args[i] == '\0')
		return (0);
	while (args[i] != '\0')
	{
		if (!ft_isdigit(args[i]))
			return (0);
		i++;
	}
	return (1);
}
