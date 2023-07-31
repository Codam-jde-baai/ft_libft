/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 17:21:43 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Locates the first occurrence of a character in a string
 * @param	s	String to search
 * @param	c	Character to search for
 * @return	Pointer to the first occurrence of the character
 * 			NULL if the character is not found
 */
char	*ft_strchr(const char *s, int c)
{
	unsigned char	d;
	int				i;

	d = (unsigned char)c;
	i = 0;
	while (s[i] != '\0' && s[i] != d)
		i++;
	if (s[i] == d)
		return ((char *)s + i);
	return (NULL);
}
