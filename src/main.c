/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvitor-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:23:51 by pvitor-l          #+#    #+#             */
/*   Updated: 2025/04/16 15:20:39 by pvitor-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*str;

	stack_a = NULL;
	stack_b = NULL;
	str = init_str(argc, argv);
	if (str)
		check_arguments(argc, argv, str);
	stack_a = init_stack(argc, str, NULL);
	if (!stack_a)
		return (1);
	if (list_sort(stack_a))
	{
		free_stack(&stack_a);
		return (0);
	}
	normalize_stack(&stack_a);
	if (get_stack_size(stack_a) <= 5)
		sort_small(&stack_a, &stack_b);
	else
		sort_radix(&stack_a, &stack_b);
	free_stack(&stack_a);
	return (0);
}

t_list	*init_stack(int argc, char *str, t_list *stack_a)
{
	int		i;
	char	**args;
	t_list	*new_node;

	i = 0;
	if (argc < 2)
		ft_error("ERRORS", 9, str);
	args = ft_split(str, ' ');
	while (args[i] != NULL)
	{
		new_node = creat_node(ft_atoi(args[i]));
		if (!new_node)
		{
			free_stack(&stack_a);
			free_array(args);
			return (NULL);
		}
		push_back(&stack_a, new_node);
		i++;
	}
	free(str);
	free_array(args);
	return (stack_a);
}

void	check_arguments(int argc, char **argv, char *str)
{
	long	num;
	int		i;
	char	**args;

	i = 0;
	if (argc < 2 || !argv[1][0])
		ft_error("ERRORS invalid arguments", 7, str);
	check_range_of_number(argv, str);
	args = ft_split(str, ' ');
	if (!args)
		ft_error("ERRORS invalid arguments", 7, str);
	while (args[i] != NULL)
	{
		if (!ft_isnum(args[i]))
		{
			free_array(args);
			ft_error("ERROR don't is number", 5, str);
		}
		num = ft_atoi(args[i]);
		check_double(args, num, i, str);
		i++;
	}
	free_array(args);
	return ;
}
