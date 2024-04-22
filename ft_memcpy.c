#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	j;
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *c = (const unsigned char *)src;

	j = 0;
	i = 0;
	while (d[i])
	{
		i++;
	}
	while (j <= n)
	{
		d[i + j] = c[j];
		j++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[21];
	char	dest1[21];

	ft_memcpy(dest, "je m'appel aurélien", 21);
	printf("faux %s", dest);
	memcpy(dest1, "je m'appel aurélien", 21);
	printf("vrai %s", dest1);

}
