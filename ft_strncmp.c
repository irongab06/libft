#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((n > 0 && s1[i]) || (n > 0 && s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
			n--;
	}
	return (0);
}
