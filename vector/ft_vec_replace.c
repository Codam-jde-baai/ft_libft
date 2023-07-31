/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vec_replace.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 13:57:59 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 21:05:24 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Replaces an element in the vector at the given index, freeing it
 * @param	vec		Vector to replace element in
 * @param	i		Index of element to replace
 * @param	data	Pointer to data to replace with
 * @return	True if the element was replaced,
		false if the index was out of bounds
*/
bool	ft_vec_replace(t_vector *vec, size_t i, void *data)
{
	if (i >= vec->size)
		return (false);
	if (vec->free)
		vec->free(vec->data + (i * vec->type_size));
	ft_memcpy(vec->data + (i * vec->type_size), data, vec->type_size);
	return (true);
}

/**
 * @brief	Replaces element in vector at given index with multiple elements,
		freeing the old element
 * @param	vec		Vector to replace element in
 * @param	i		Index of element to replace
 * @param	data	Pointer to array of data to replace with
 *
 */
bool	ft_vec_replace_multiple(t_vector *vec, size_t i, void **data)
{
	size_t	j;
	size_t	size;

	j = 0;
	while (data[j])
		j++;
	if (j == 0)
		return (false);
	if (j == 1)
		return (ft_vec_replace(vec, i, data[0]));
	if (i + j > vec->size)
	{
		size = vec->size;
		while (i + j > size)
			size *= 2;
		if (!ft_vec_resize(vec, size))
			return (false);
	}
	ft_memmove(vec->data + ((i + j) * vec->type_size), vec->data + (i
			* vec->type_size), (vec->size - i) * vec->type_size);
	if (vec->free)
		vec->free(vec->data + (i * vec->type_size));
	ft_memcpy(vec->data + (i * vec->type_size), data, j * vec->type_size);
	vec->size += j;
	return (true);
}
