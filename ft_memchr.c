#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c1;
	unsigned char	s1;
	
	s1 = (unsigned char*)s;
	c1 = (unsigned char)c;
	while (n > 0)
	{
		if (s1[i] = c)
			return (s1[i]);
		else
			n--;
			i++;
	}
	return (NULL);
}
