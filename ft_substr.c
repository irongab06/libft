#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	i = 0;
	s1 = NULL;
	s1 = malloc(sizeof(char) * len + 1);
	if (s1 == NULL)
		return (0);
	if (start >= ft_strlen(s))
	{
		s1[i] = '\0';
		return (s1);
	}
	while (s[i] && i < len)
	{
		s1[i] = s[start];
		i++;
       		start++;	       
	}
	s1[i] = '\0';
	return (s1);
}
