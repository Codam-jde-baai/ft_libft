/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 16:01:40 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Locates the first occurrence of c (converted to an unsigned char)
 * 			in string s
 * @param	s		Pointer to the string to be searched
 * @param	c		Character to be located
 * @param	n		Number of bytes to be searched
 * @return	Pointer to the located character, or NULL if the character does
 * 			not occur in the string
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	find;
	unsigned int	i;

	find = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (find == *ptr)
			return (ptr);
		ptr++;
		i++;
	}
	return (NULL);
}
