
#include "libft.h"
#include "stdlib.h"

void	check_double_number(char **args, int num, int i )
{
	i++;
		while (args[i]) 
		{
			if (ft_atoi(args[i]) == num)
			{
				ft_printf("double number \n");
				exit(1);
			}
			i++;
		}
	return ;
}

int 	main(void)
{
	char **number;
	long	n;
	int	i;
	char *args = "42 2 34 42234 4 2334 234";

	i = 0;
	number = ft_split(args, ' ');
	while (number[i])
	{
		n = ft_atoi(number[i]);
		check_double_number(number, n, i);
		i++;
	}
	free_array(number);

	return (0);
}
