#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	count = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			sign = sign * -1;
			count ++;
		}
		if(str[i] == '+')
			count ++;
		if(count > 1)
			return (0);
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * sign);	
}
int	main(void)
{
	printf("%i", ft_atoi("12345"));
	printf("%i", atoi("12345"));
	return(0);
}
