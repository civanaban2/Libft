#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*temp;

	if (!lst)
		return (0);
	size = 1;
	temp = lst;
	while (temp->next)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
