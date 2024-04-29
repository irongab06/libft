/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:59:32 by gacavali          #+#    #+#             */
/*   Updated: 2024/04/29 13:04:14 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;
	size_t			len_s;

	if (s == NULL)
		return (NULL);
	new_s = NULL;
	i = 0;
	len_s = ft_strlen(s);
	new_s = malloc(sizeof(char) * (len_s + 1));
	if (new_s == NULL)
		return (NULL);
	while (i < len_s)
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
