/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vec_add_char.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/18 10:28:34 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/11/18 10:30:27 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief vec push exlusively for sizeof(char) vectors,
	does not free incoming data
 */
bool	char_vec_push(t_vector *vec, char c)
{
	if (vec->size == vec->capacity)
		if (ft_vec_resize(vec, vec->capacity * 2) == false)
			return (false);
	if (!ft_memcpy(vec->data + vec->size * vec->type_size, &c, vec->type_size))
		return (false);
	vec->size++;
	return (true);
}