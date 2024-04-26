/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:38:18 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/26 15:49:51 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *str)
{
	int	i;
	int	inter;
	size_t	word;

	i = 0;
	inter = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			if(inter == 0)
			{
				inter = 1;
				word++;
			}
		}
		else
		{
			inter = 0;
		}
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	tab;
	size_t	i;
	unsigned int	j;
	char	**t;

	i = 0;
	j = 0;
	tab = ft_count(s);
	t = malloc(sizeof(char*) * (tab + 1));
	tab = 0;
	if (t == NULL)
		return (NULL); 
	while (s[i])
	{
		if (s[i] == c)
		{
			t[tab] = ft_substr(s ,j , (i - 1));
			j = i;
			j++;
			tab++;
			 
		}
		i++;
	}
	return (t);
		
}
