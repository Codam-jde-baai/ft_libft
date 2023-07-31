/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:51:49 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Fills a block of memory with a given value
 * @param	str	Pointer to the block of memory to fill
 * @param	c	Value to fill the block of memory with
 * @param	i	Number of bytes to fill
 * @return	Pointer to the block of memory
 */
void	*ft_memset(void *str, int c, size_t i)
{
	unsigned char	*ptr;
	unsigned int	n;

	n = 0;
	ptr = (unsigned char *)str;
	if (i > 0)
	{
		while (n < i)
		{
			ptr[n] = c;
			n++;
		}
	}
	return (ptr);
}
