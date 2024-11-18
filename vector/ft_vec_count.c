/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vec_count.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/28 17:42:02 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2023/07/28 21:05:06 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Counts the number of elements in the vector that match the count function
 * @param	vec		Vector to count elements in
 * @param	count	Function to count elements with
 * @return	Number of elements that match the count function
 */
size_t	ft_vec_count(t_vector *vec, bool (*count)(void *))
{
	size_t	i;
	size_t	counted;

	i = 0;
	counted = 0;
	while (i < vec->size)
	{
		if (count(vec->data + (i * vec->type_size)))
			counted++;
		i++;
	}
	return (counted);
}
