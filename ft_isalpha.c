/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:01:17 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/22 13:02:00 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if(c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%i", isalpha('c'));
	printf("%i",ft_isalpha('cq'));
	return (0);
}*/
