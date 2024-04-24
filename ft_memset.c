/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:19:21 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/23 14:54:33 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;

	d = (int) c;
	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = d;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	void	*b[20];
	void	*c[20];

	ft_memset(b, 'A', 50);
	memset(c, '8', 50);
	printf("%s", (char *)c);
	return (0);
}*/
