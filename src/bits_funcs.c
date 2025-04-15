/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:33:31 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/15 19:37:01 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*init_str(int argc, char **argv)
{
	char	*str;
	char	*tmp_pnt;
	int		i;

	i = 1;
	str = ft_strdup("");
	while (i < argc)
	{
		tmp_pnt = str;
		str = ft_strjoin(str, " ");
		if (!str)
			return (NULL);
		free(tmp_pnt);
		tmp_pnt = str;
		str = ft_strjoin(str, argv[i]);
		if (!str)
			return (NULL);
		free(tmp_pnt);
		i++;
	}
	return (str);
}

int	get_max_bits(t_list *stack)
{
	int	max_index;
	int	max_bits;

	max_index = 0;
	max_bits = 0;
	while (stack)
	{
		if (stack->index > max_index)
			max_index = stack->index;
		stack = stack->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}
