/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:38:18 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/26 15:08:11 by gacavali         ###   ########.fr       */
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
	size_t	j;
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
			t[tab] = malloc(sizeof(char) * ((i - j) + 1));
			if (t[tab] == NULL)
				return (NULL);
			i++;
			j = (i - 1);
			tab++;
		}
		else
			i++;
	}
	i = 0;
	while (s[i])
	{	
		if (s[i] != c)
		{
			t[tab][j] = s[i];
			i++;
			j++;
		}
		else
		{	
			t[tab][j] = '\0';
			tab++;
			i++;
			j = 0;
		}
	}
	t[tab][j] = '\0';
	return (t);
		
}
