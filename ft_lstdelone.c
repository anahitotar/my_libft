#include "libft.h"
/*
Takes a node as parameter and frees its content
using the function ’del’. Free the node itself but
does NOT free the next node.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return;
	if (del)
		del(lst->content);
	free(lst);
}
