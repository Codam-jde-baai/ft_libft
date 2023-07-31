/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vec_insert.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 13:57:52 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 21:05:18 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Inserts an element into the vector at the given index
 * @param	vec		Vector to insert element into
 * @param	i		Index to insert element at
 * @param	data	Pointer to data to insert
 * @return	True if the element was inserted,
		false if the index was out of bounds or the vector could not be resized
*/
bool	ft_vec_insert(t_vector *vec, size_t i, void *data)
{
	if (i > vec->size)
		return (false);
	if (vec->size == vec->capacity)
	{
		if (!ft_vec_resize(vec, vec->capacity * 2))
			return (false);
	}
	if (i == vec->size)
	{
		ft_memcpy(vec->data + (i * vec->type_size), data, vec->type_size);
		vec->size++;
		return (true);
	}
	ft_memmove(vec->data + ((i + 1) * vec->type_size), vec->data + (i
			* vec->type_size), (vec->size - i) * vec->type_size);
	ft_memcpy(vec->data + (i * vec->type_size), data, vec->type_size);
	vec->size++;
	return (true);
}

/**
 * @brief	Inserts multiple elements into the vector at the given index
 * @param	vec		Vector to insert elements into
 * @param	i		Index to insert elements at
 * @param	data	Pointer to array of data to insert
 * @return	True if the elements were inserted,
		false if the index was out of bounds or the vector could not be resized
*/
bool	ft_vec_insert_multiple(t_vector *vec, size_t i, void **data)
{
	size_t	j;
	size_t	size;

	j = 0;
	while (data[j])
		j++;
	if (j == 0)
		return (false);
	if (j == 1)
		return (ft_vec_insert(vec, i, data[0]));
	if (i > vec->size)
		return (false);
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
	ft_memcpy(vec->data + (i * vec->type_size), data, j * vec->type_size);
	vec->size += j;
	return (true);
}
