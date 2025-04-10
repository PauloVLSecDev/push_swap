/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:54:15 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/08 17:12:00 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

# include <stdio.h>

typedef struct s_list
{
	int		count;
	int		index;	
	struct	s_list *next;	

}		t_list;

void check_range_of_number(char **number);
long long     ft_atoll(char *str);
void    check_arguments(int argc, char **argv);
int     main(int argc, char **argv);

#endif
