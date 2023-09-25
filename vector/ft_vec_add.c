/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vec_add.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 13:57:46 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/09/25 20:03:43 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief Adds an element to the end of the vector.
 * @param vec the vector
 * @param data the data to add
 * @return false on malloc failure, true on success
*/
bool	ft_vec_add(t_vector *vec, void *data)
{
	if (vec->size == vec->capacity)
	{
		if (!ft_vec_resize(vec, vec->capacity * 2))
			return (false);
	}
	ft_memcpy(vec->data + (vec->size * vec->type_size), data, vec->type_size);
	vec->size++;
	return (true);
}
