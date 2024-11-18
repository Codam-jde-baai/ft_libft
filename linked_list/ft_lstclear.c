/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 15:30:39 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/11/18 10:11:53 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Deletes and frees the given element and
 * every successor of that element
 * @param	lst	Pointer to the first element of the list
 * @param	del	Function to delete the content of an element
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		next_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = NULL;
		*lst = next_node;
	}
}
