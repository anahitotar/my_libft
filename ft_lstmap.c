#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_node;

    while (lst)
    {
        // Apply function f to content and create a new node
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            // If allocation fails, clear everything created so far
            ft_lstclear(&new_list, del);
            return NULL;
        }
        // Add the new node to the end of the new list
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return new_list;
}

