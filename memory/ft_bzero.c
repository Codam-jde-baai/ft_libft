/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 11:36:48 by jde-baai      #+#    #+#                 */
/*   Updated: 2024/11/18 10:12:43 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Sets the first n bytes of the memory area pointed to by s to zero
 * @param	s	Pointer to the memory area
 * @param	n	Number of bytes to set to zero
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	ft_memset(ptr, 0, n);
}
