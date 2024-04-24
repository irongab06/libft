/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:05:19 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/23 17:10:07 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	d;

	d = (char)c;
	i = ft_strlen(s);
	if (d == '\0')
		return (&((char *)s)[i]);
	while (i > 0)
	{
		i--;
		if (s[i] == d)
			return (&((char *)s)[i]);
	}
	if (s[i] == d)
		return (&((char *)s)[i]);
	return (NULL);
}
