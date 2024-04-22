/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:44:40 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/22 15:56:53 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	j;
	unsigned char	d;
	unsigned char	c;

	d = (unsigned char *)dest;
	c = (unsigned char *)src;


	j = 0;
	if ((d == NULL) || (c == NULL))
		return(NULL);
	while (j < n)
	{
		d[j] = c[j];
		j++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[21];
	char	dest1[21];

	ft_memcpy(dest, "", 21);
	printf("faux %s\n", dest);
	memcpy(dest1, "", 21);
	printf("vrai %s", dest1);
	return (0);

}
