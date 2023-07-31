/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 12:21:31 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Copies n bytes from memory area src to memory area dst
 * @param	dst		Destination memory area
 * @param	src		Source memory area
 * @param	i		Number of bytes to copy
 * @return	Pointer to the destination memory area
 */
void	*ft_memcpy(void *dst, const void *src, size_t i)
{
	unsigned char		*ptrdst;
	const unsigned char	*ptrsrc;

	ptrsrc = src;
	ptrdst = dst;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (i > 0)
	{
		*ptrdst = *ptrsrc;
		ptrsrc++;
		ptrdst++;
		i--;
	}
	return (dst);
}
