/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:54:43 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/01 11:00:00 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	if (s1[i] == 0 && s2[i] == 0)
		return (0);
	while (n > 0)
	{
		if (s11[i] == '\0' || s22[i] == '\0')
			return (s11[i] - s22[i]);
		if (s11[i] != s22[i])
			return (s11[i] - s22[i]);
		else
		{
			i++;
			n--;
		}
	}
	return (0);
}
