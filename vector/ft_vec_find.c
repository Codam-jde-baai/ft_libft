/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vec_find.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/28 17:26:39 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2023/07/28 21:05:09 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Finds the first element in the vector that matches the find function
 * @param	vec		Vector to find element in
 * @param	find	Function to find element with
 * @return	Index of the first element that matches the find function,
 * 			or SIZE_MAX if no matching element was found in the vector
 */
size_t	ft_vec_find_i(t_vector *vec, bool (*find)(void *))
{
	size_t	i;

	i = 0;
	while (i < vec->size)
	{
		if (find(vec->data + (i * vec->type_size)))
			return (i);
		i++;
	}
	return (SIZE_MAX);
}

/**
 * @brief	Finds the first element in the vector that matches the find function
 * @param	vec		Vector to find element in
 * @param	find	Function to find element with
 * @return	Pointer to the first element that matches the find function,
 * 			or NULL if no matching element was found in the vector
 */
void	*ft_vec_find_p(t_vector *vec, bool (*find)(void *))
{
	size_t	i;
	void	*elem;

	i = 0;
	while (i < vec->size)
	{
		elem = vec->data + (i * vec->type_size);
		if (find(elem))
			return (elem);
		i++;
	}
	return (NULL);
}

/**
 * @brief	Finds the first element in the vector that matches the find function
 * @param	vec		Vector to find element in
 * @param	find	Function to find element with
 * @return	Pointer to the first element that matches the find function,
 * 			or NULL if no matching element was found in the vector
 */
void	*ft_vec_get(t_vector *vec, size_t index)
{
	if (index >= vec->size)
		return (NULL);
	return (vec->data + (index * vec->type_size));
}
