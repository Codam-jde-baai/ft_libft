/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 17:09:59 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Compares two memory areas
 * @param	s1	First memory area
 * @param	s2	Second memory area
 * @param	n	Number of bytes to compare
 * @return	0 if the memory areas are equal,
 * 			positive if s1 is greater than s2,
 * 			negative if s1 is smaller than s2
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*ptrs1;
	unsigned char	*ptrs2;

	ptrs1 = (unsigned char *)s1;
	ptrs2 = (unsigned char *)s2;
	i = 0;
	while ((i < n))
	{
		if (ptrs1[i] != ptrs2[i])
			return (ptrs1[i] - ptrs2[i]);
		i++;
	}
	return (0);
}
