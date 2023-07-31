/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vec_resize.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 13:58:01 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 21:05:27 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief change the capacity of a vector
 * @param vec the vector
 * @param new_size the new capacity for the vec
 * @return	false on malloc failure, false on new_size<size
 * @warning if size is bigger than the new_size returns NULL
 *
 */
bool	ft_vec_resize(t_vector *vec, size_t new_size)
{
	void	*new_data;

	if (new_size < vec->size)
		return (false);
	new_data = ft_realloc(vec->data, vec->type_size * new_size);
	if (!new_data)
		return (false);
	vec->data = new_data;
	vec->capacity = new_size;
	return (true);
}
