/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vec_apply.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 13:57:48 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 21:05:04 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Applies a function to every element in the vector
 * @param	vec		Vector to apply function to
 * @param	apply	Function to apply to every element
 * @return	void
 * @warning Does not check if the vector is empty
 */
void	ft_vec_apply(t_vector *vec, void (*apply)(void *))
{
	size_t	i;

	i = 0;
	while (i < vec->size)
	{
		apply(vec->data + (i * vec->type_size));
		i++;
	}
}

/**
 * @brief	Applies a function to every element in the vector
 * @param	vec		Vector to apply function to
 * @param	apply	Function to apply to every element
 * @param	start	Index of the first element to apply the function to
 * @param	len		Number of elements to apply the function to
 * @return	void
 * @warning Instantly returns if the start + len is out of bounds
 */
void	ft_vec_napply(t_vector *vec, void (*apply)(void *), size_t start,
		size_t len)
{
	size_t	i;

	i = 0;
	if (start + len > vec->size)
		return ;
	while (i < len)
	{
		apply(vec->data + ((i + start) * vec->type_size));
		i++;
	}
}
