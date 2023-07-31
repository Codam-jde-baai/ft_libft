/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vec_remove.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 13:57:55 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 21:05:21 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Removes an element from the vector at the given index, freeing it
 * @param	vec		Vector to remove element from
 * @param	i		Index of element to remove
 * @return	True if the element was removed,
		false if the index was out of bounds
 */
bool	ft_vec_remove(t_vector *vec, size_t i)
{
	if (i >= vec->size)
		return (false);
	if (vec->free)
		vec->free(vec->data + (i * vec->type_size));
	if (vec->size == i + 1)
	{
		vec->size--;
		return (true);
	}
	ft_memmove(vec->data + (i * vec->type_size), vec->data + ((i + 1)
			* vec->type_size), (vec->size - i - 1) * vec->type_size);
	vec->size--;
	return (true);
}
