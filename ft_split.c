/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:38:18 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/01 16:04:43 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_word(char const *s, char c, size_t i)
{
	size_t	j;

	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (j);
		else
		{
			i++;
			j++;
		}
	}
	return (j);
}

static size_t	ft_count(char const *str, char c)
{
	int		i;
	int		inter;
	size_t	word;

	i = 0;
	inter = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (inter == 0)
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

static char	**ft_split2(size_t tab_max, char **t, char const *s, char c)
{
	size_t			tab_min;
	int				inter;
	size_t			i;
	unsigned int	j;

	j = 0;
	i = 0;
	inter = 0;
	tab_min = 0;
	while (tab_min < tab_max)
	{
		if (s[i] != c && inter == 0)
		{
			j = ft_len_word(s, c, i);
			t[tab_min++] = ft_substr(s, i, j);
			i = i + j;
			j = 0;
			inter = 1;
		}
		if (s[i] == c)
			inter = 0;
		i++;
	}
	t[tab_min] = NULL;
	return (t);
}

char	**ft_split(char const *s, char c)
{
	size_t	tab_max;
	char	**t;

	if (s == NULL)
		return (NULL);
	tab_max = ft_count(s, c);
	t = malloc(sizeof(char *) * (tab_max + 1));
	if (t == NULL)
		return (NULL);
	t = ft_split2(tab_max, t, s, c);
	return (t);
}
