/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 12:53:06 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Copies a string to a buffer
 * @param	dst		Destination buffer
 * @param	src		Source string
 * @param	size	Size of the buffer
 * @return	Length of the source string
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int				i;
	unsigned int	output;

	output = 0;
	while (src[output] != '\0')
		output++;
	if (size == 0)
		return (output);
	i = 0;
	if (size > 0)
		size--;
	while (size > 0 && src[i] != '\0')
	{
		dst[i] = src[i];
		size--;
		i++;
	}
	dst[i] = '\0';
	return (output);
}
