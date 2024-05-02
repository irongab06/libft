/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:47:45 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/01 15:54:43 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*s1;
	size_t				i;
	unsigned int		s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	s1 = NULL;
	i = 0;
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	s1 = malloc(sizeof(char) * len + 1);
	if (s1 == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		s1[i] = s[start + i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
char	*ft_substr(const char *s, unsigned int start, size_t len);

int main(void)
{
	char	*dest = ft_substr(NULL, 10, 0);
	
	char	*dest1 = substr(NULL, 10, 0);
}*/
