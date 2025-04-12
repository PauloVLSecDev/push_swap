/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:54:15 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/12 20:03:59 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdio.h>

typedef struct s_list
{
	int	value;
	int	index;	
	struct	s_list *next;	

}	t_list;

t_list	*creat_node(int value);
t_list  *init_stack(char **argv, t_list *stack_a);
int	list_sort(t_list *stack);
void	push_back(t_list **stack, t_list *new_node);
void    check_arguments(int argc, char **argv);
void	check_range_of_number(char **number);
void	check_double(char **args, int num, int i);
long long     ft_atoll(char *str);
int     main(int argc, char **argv);
void    ft_error(char *msg, int code);
int   ft_isnum(char *args);

#endif
