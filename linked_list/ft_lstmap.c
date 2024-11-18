/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 15:51:11 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/11/18 10:10:48 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Iterates a list and applies a function to each element's content
 * 			to create a new list
 * @param	lst		Pointer to the first element of the list
 * @param	f		Function to apply to each element's content
 * @param	del	Function to delete the content of an element if needed
 * @return	Pointer to the new list, or NULL if allocation fails
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*newlist;
	t_list	*ncontent;

	newlist = NULL;
	while (lst != NULL)
	{
		ncontent = (*f)(lst->content);
		if (ncontent == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		node = ft_lstnew(ncontent);
		if (node == NULL)
		{
			del(ncontent);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, node);
		lst = lst->next;
	}
	return (newlist);
}
