#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

static size_t	ft_count_int(int n)
{
	size_t	i;

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
static char	*ft_putnbr_itoa(int n, char *s, size_t i)
{	
	if (n >= 10)
	{
		ft_putnbr_itoa(n / 10, s, i - 1);
		ft_putnbr_itoa(n % 10, s, i);
	}
	else
	{
		s[i - 1] = (n + '0');
	}
	s[i] = '\0';
	return (s);
}	
char	*ft_itoa(int	n)
{
	size_t	i;
	char	*s;
	

	i = ft_count_int(n);
	s = NULL;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n = n * (-1);
	}
	s = ft_putnbr_itoa(n, s, i);
	return (s);
	
}
/*
int	main(void)
{
	printf("%s", ft_itoa(123545476575));
	return (0);
}*/
