#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *out;
	t_list *tmp;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	out = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp->next = f(lst)))
		{
			free(tmp->next);
			return (NULL);
		}
		else
			tmp = tmp->next;
	}
	return (out);
}
