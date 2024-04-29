/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:47:03 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/29 12:47:31 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new_s;

	if (s1 == NULL && s2 == NULL)
	{
		new_s = ft_calloc(1, 1);
		return (new_s);
	}
	i = 0;
	if (s1 != NULL)
		i = ft_strlen(s1);
	if (s2 != NULL)
		i += ft_strlen(s2);
	new_s = ft_calloc(sizeof(char), i + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[j])
		new_s[i++] = s1[j++];
	j = 0;
	while (s2 && s2[j])
		new_s[i++] = s2[j++];
	return (new_s);
}
