/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:23:08 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/24 14:29:03 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while ((big[i + j] == little[j] || little[j] == '\0') && i + j <= len)
		{
			if (little[j] == '\0')
				return ((char *)big + i);
			else
				j++;
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	printf("%s", ft_strnstr("manman dans cette", "man", 42));
	return (0);
}*/
