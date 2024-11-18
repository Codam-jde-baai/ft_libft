/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 13:55:07 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/11/18 10:12:50 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Allocates memory for an array of count elements of size bytes each
 * 			and initializes all bytes to zero
 * @param	count	Number of elements
 * @param	size	Size of each element
 * @return	Pointer to the allocated memory, or NULL if allocation fails
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
