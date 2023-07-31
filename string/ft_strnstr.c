/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 20:59:47 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Locates the first occurrence of the null-terminated string needle
 * 			in the string haystack, where not more than len characters are
 * 			searched. Characters that appear after a `\0' character are not
 * 			searched.
 * @param	haystack	String to search in
 * @param	needle		String to search for
 * @param	len			Maximum number of characters to search
 * @return	Pointer to the first character of the first occurrence of needle
 * 			in haystack, or NULL if needle is not part of haystack
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	n;
	char			*ptr;

	ptr = (char *)haystack;
	if (needle[0] == '\0')
		return (ptr);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		n = 0;
		if (haystack[i] == needle[n])
		{
			while ((haystack[i + n] == needle[n]) && (haystack[i + n] != '\0'
					&& needle[n] != '\0'))
			{
				n++;
				if (needle[n] == '\0' && (i + n <= len))
					return (&ptr[i]);
			}
		}
		i++;
	}
	return (NULL);
}
