#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_elem = ft_lstnew((*f)(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			free(new_elem);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (new_lst);
}
