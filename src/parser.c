/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:33:31 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/04 19:44:23 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap"

void	exist_double_number(char **args)
{
	int		i;
	int		j;
	int		**number;
	
	i = 0;
	j = 0;
	while (args[i] != NULL) 
	{
			number[i] = ft_atoi(args[i]);
			i++;
	}
	i = 0;
	while(number[i] != NULL)
	{
		j = 0;	
		while (number[j] != NULL) 
		{
				if (number[i] == number[j])	
				{
						ft_printf("double number");
						exit(1);

				}
				j++;
		}
		i++;
	}
}	

void    check_double_number()
{

}
