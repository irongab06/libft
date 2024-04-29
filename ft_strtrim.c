/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:47:56 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/29 14:55:40 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
	size_t    i;
	size_t    j;
	size_t    l;
	char    *new_s;

	i = 0;
	l = 0;
	new_s = NULL;
	if (set == NULL && s1 == NULL)
		return (ft_strdup(""));
	if (set == NULL)
		return (new_s = ft_strdup(s1));
	if (s1 == NULL)
		return(new_s = ft_strdup(""));
	j = ft_strlen(s1);
	while (s1[i])
	{
		while (set[l] && s1[i] != set[l])
			l++;
		if (set[l] == '\0')
			break;
		i++;
		l = 0;
	/*
        if (s1[i] == set[l])
        {
            l = 0;
            i++;
        }
        if (s1[i] != set[l] && set[l] == '\0')
        {
            break;
        }
       if (s1[i] != set[l])
           l++;
	*/
	}

	l = 0;
	while (j != 0)
	{
		if (s1[j] == set[l])	
		{
			l = 0;
			j--;
		}
		if (s1[j] != set[l] && set[l] == '\0')
		{
			l = 0;
			break;
		}
		if (s1[j] != set[l])
		l++;	
	}
	if (s1[i] == '\0')
		return (new_s = ft_strdup(""));
	l = (j - i) + 1;
	new_s = malloc(sizeof(char) * (l + 1));
	if (new_s == NULL)
		return (NULL);
	l = 0;
	while (i <= j)
	{
		new_s[l] = s1[i];
		i++;
		l++;
	}
	new_s[l] = '\0';
	return (new_s);
}
