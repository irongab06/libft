/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:19:20 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/23 17:02:06 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	d;

	d = (char)c;
	i = 0;
	if (s[i] == '\0' && d == '\0')
		return (&((char *)s)[i]);
	while (s[i] || d == '\0')
	{
		if (s[i] == d)
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
