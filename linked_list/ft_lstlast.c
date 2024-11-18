/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 13:10:44 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/11/18 10:11:13 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Returns the last element of the list
 * @param	lst	Pointer to the first element of the list
 * @return	Pointer to the last element of the list
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
