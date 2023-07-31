/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vec_free.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/28 17:46:53 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2023/07/28 21:05:11 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Frees the vector
 * @param	vec		Vector to free
 * @return	void
 */
void	ft_vec_free(t_vector *vec)
{
	size_t	i;

	i = 0;
	if (vec->free)
	{
		while (i < vec->size)
		{
			vec->free(vec->data + (i * vec->type_size));
			i++;
		}
	}
	free(vec->data);
	vec->data = NULL;
	vec->free = NULL;
}
