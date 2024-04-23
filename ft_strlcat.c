/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:43:53 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/23 15:26:25 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_bis(const char *dst)
{
	size_t	i;

	i = 0;
	while (dst[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	i;

	len_dst = ft_strlen_bis(dst);
	i = 0;
	if (size == 0)
		return (ft_strlen_bis(src));
	if (size < len_dst)
		return (ft_strlen_bis(src) + size);
	if (dst && src && size)
	{
		while (src[i] && (i + len_dst) < size - 1)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
	}
	dst[len_dst + i] = '\0';
	return (len_dst + ft_strlen_bis(src));
}
