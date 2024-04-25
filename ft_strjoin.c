#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new_s;

	j = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	new_s = NULL;
	if (s1 == 0 && s2 == 0)
		return (new_s = ft_strdup(""));
	new_s = malloc(sizeof(char) * i + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s1[j])
		new_s[i++] = s1[j++];
	j = 0;
	while (s2[j])
		new_s[i++] = s2[j++];
	new_s[i] = '\0';
	return (new_s);
}
