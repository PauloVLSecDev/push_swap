
#include "libft.h"
#include "stdlib.h"

void	check_double_number(char **args)
{
	int		i;
	int		j;
	int		count;
	int		*number = NULL;;
	
	i = 0;
	j = 0;
	count = 0;
	while (args[count] != NULL) 
			count++;
	number = (int *)malloc(count * sizeof(number));
	if (!number)
		return ;
	while (args[i] != NULL) 
	{
			number[i] = ft_atoi(args[i]);
			i++;
	}
	i = 0;
	while(number[i] < count)
	{
		j = i + 1;	
		while (number[j] < count) 
		{
				if (number[i] == number[j])	
				{
						ft_printf("double number \n");
						free(number);
						exit(1);
				}
				else
					j++;
		}
		i++;
	}
	ft_printf("whitout double number\n");
}	

int 	main(void)
{
	char **number;
	char *args = "4234 2 34 42234 234 4 234 2334 234";

	number = ft_split(args, ' ');
	check_double_number(number);
	free_array(number);

	return (0);
}
