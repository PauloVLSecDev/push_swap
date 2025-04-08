/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list_utills.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:13:22 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/08 17:37:45 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


t_list	ft_connect_list(int count)
{
	t_list *new;
	new = (t_list *)malloc(t_list * sizeof(*new))
	if (!new)
		return (NULL);
	new->count = count;
	new->index = -1;
	new->next = NULL;
	return (new);
}
