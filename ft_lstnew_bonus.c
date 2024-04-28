t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(*element));
	if (element = NULL)
		return (NULL);
	element -> content = content;
	element -> next = NULL;
	return (element)
}
