/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:47:56 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/29 16:30:12 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*new_s;

	new_s = NULL;
	if (s1)
	{
		while (*s1 && set && ft_strchr(set, (int)*s1))
			s1++;
		i = ft_strlen(s1);
		while (i > 0 && set && ft_strchr(set, (int)s1[i - 1]))
			i--;
		new_s = ft_calloc(sizeof(char), i + 1);
		if (new_s)
			ft_strlcpy(new_s, s1, i + 1);
	}
	return (new_s);
}
