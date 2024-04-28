#include <stdio.h>

int	ft_count_int(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}	
	return (i);
}

int	main(void)
{
	printf("%i", ft_count_int(0));
	return (0);
}
