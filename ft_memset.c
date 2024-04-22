/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:19:21 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/22 15:40:52 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{	
	size_t	i;
	unsigned char	d;

	d = (int) c;
	i = 0;
	while (i < len)
	{
		((unsigned char*) b)[i] = d;
		//write(1, &b[i], 1);
		i++;
	}
	//write(1, "\n", 1);
	return (b);
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
