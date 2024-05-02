/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:19:28 by gacavali          #+#    #+#             */
/*   Updated: 2024/05/01 13:36:41 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*stock;

	temp = *lst;
	if (*lst == NULL || del == NULL)
		return ;
	while (temp)
	{
		stock = temp->next;
		ft_lstdelone(temp, del);
		temp = stock;
	}
	*lst = NULL;
}
