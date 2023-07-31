/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/28 12:20:45 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2023/07/28 21:12:30 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Reallocates a block of memory
 * @param	ptr		Pointer to the block of memory to reallocate
 * @param	size	New size of the block of memory
 * @return	Pointer to the reallocated block of memory, or NULL if the
 * 			allocation failed
*/
void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;

	new = malloc(size);
	if (!new)
		return (NULL);
	if (ptr)
	{
		ft_memcpy(new, ptr, size);
		free(ptr);
	}
	return (new);
}
