#include <stdio.h>
#include <string.h>


void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{	
		((unsigned char *)s)[i] = 0;
		i++;
	}	
}

int	main(void)
{
	char	s[20];
	char	c[20];
		
	ft_bzero(c, 10);
	printf("%s", c);
	bzero(s, 10);
	printf("%s", s);
	return (0);
}
