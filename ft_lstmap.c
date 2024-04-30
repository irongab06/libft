#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int	i;
	t_list	**new_lst;
	t_list	*temp;
	
	temp = lst;
	new_lst = malloc(sizeof(t_list));
	if (new_lst == NULL)
		return (NULL);
	while (lst)
	{	
		new_lst = f(lst->content);
		new_lst = &lst->next;
		lst = lst->next;
	}
	return (*new_lst);
}
