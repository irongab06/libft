#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if(c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%i", isalpha('c'));
	printf("%i",ft_isalpha('cq'));
	return (0);
}
