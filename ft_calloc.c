/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:47:19 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/24 14:52:03 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if ((count >= 65535 && size >= 65535) || count * size >= 65535)
		return (NULL);
	s =  malloc(size *count);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, (count * size));
	return (s);
}
