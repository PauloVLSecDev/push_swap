/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:54:15 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/16 19:58:47 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdio.h>

typedef struct s_list
{
	int				size;
	int				value;
	int				index;
	struct s_list	*next;

}					t_list;

t_list				*creat_node(int value);
t_list				*init_stack(char *str, t_list *stack_a);
int					list_sort(t_list *stack);
void				push_back(t_list **stack, t_list *new_node);
void				check_arguments(char **argv, char *str);
void				check_range_of_number(char **number, char *str);
void				check_double(char **args, int num, int i, char *str);
long long			ft_atoll(char *str);
int					main(int argc, char **argv);
void				ft_error(char *msg, int code, void *str);
int					ft_isnum(char *args);
void				normalize_stack(t_list **stack_a);
int					get_stack_size(t_list *stack);
char				*init_str(int argc, char **argv);
void				is_null(char **argv, int argc);

void				sort_two(t_list **stack);
void				sort_three(t_list **stack);
void				sort_four(t_list **stack_a, t_list **stack_b);
void				sort_five(t_list **stack_a, t_list **stack_b);
void				sort_small(t_list **stack_a, t_list **stack_b);
void				sort_radix(t_list **stack_a, t_list **stack_b);
int					get_max_bits(t_list *stack);
void				free_stack(t_list **stack);
int					find_position(t_list *stack, int index);

void				double_ra(t_list **stack_a);
void				pa(t_list **stack_a, t_list **stack_b, char *str);
void				pb(t_list **stack_a, t_list **stack_b, char *str);
void				sa(t_list **stack_a, char *str);
void				sb(t_list **stack_b, char *str);
void				ra(t_list **stack_a, char *str);
void				rb(t_list **stack_b, char *str);
void				rra(t_list **stack_a, char *str);
void				rrb(t_list **stack_b, char *str);
void				ss(t_list **stack_a, t_list **stack_b);
void				rr(t_list **stack_a, t_list **stack_b);
void				rrr(t_list **stack_a, t_list **stack_b);

#endif
