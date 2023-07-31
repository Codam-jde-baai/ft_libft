/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vec_init.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 13:57:50 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 21:05:13 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief assigns the right variables to t_vector *vec
 * @param max_capacity the estimated capacity required for the data(can later be adjust using resize)
 * @param type_size the size of the blocks of data that will be stored in the vector
 * @param free_blocks a free function for the blocks of data. Can be set to NULL if blocks are not mem allocated
 * @return false on malloc failure, true on success
*/
bool	ft_vec_init(t_vector *vec, size_t max_capacity, size_t type_size, void (*free_blocks)(void *))
{
	vec->data = ft_calloc(type_size, max_capacity);
	if (!vec->data)
		return (false);
	vec->size = 0;
	vec->type_size = type_size;
	vec->capacity = max_capacity;
	vec->free = free_blocks;
	return (true);
}
