/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:53:29 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/24 09:02:55 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c1;
	unsigned char	*s1;
	int				i;

	i = 0;
	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n > 0)
	{
		if (s1[i] == c1)
			return (s1 + i);
		else
		{
			n--;
			i++;
		}
	}
	return (NULL);
}
