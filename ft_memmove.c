/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:03:38 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/29 14:58:55 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*c = src;

	d = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (d < c)
	{
		while (i < n)
		{
			d[i] = c[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			d[n - 1] = c[n - 1];
			n--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>


int	main(void)
{
	char	dest[27];
	char	dest1[27];

	ft_memmove(dest, "", 27);
	printf("faux %s\n", dest);
	memmove(dest1, "", 27);
	printf ("vrai %s", dest1);
	return (0); 
	
}*/
