/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:45:58 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/15 19:46:19 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(char *msg, int code, void *str)
{
	ft_putendl_fd(msg, 2);
	free(str);
	exit(code);
	return ;
}
