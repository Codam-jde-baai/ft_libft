/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:05:28 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	*ft_subassign(char *src, char *dst, size_t len, size_t start);

/**
 * @brief	Allocates and returns a substring from the string 's'
 * @param	s		The string to create the substring from
 * @param	start	Index of the first character of the substring
 * @param	len		Length of the substring
 * @return	The substring
 * 			NULL if the allocation fails
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*src;
	char			*dst;
	unsigned int	strlen;

	if (start >= ft_strlen(s))
	{
		dst = ft_calloc(1, 1);
		return (dst);
	}
	src = (char *)s;
	strlen = ft_strlen(&s[start]);
	if (len < strlen)
		dst = malloc(len + 1);
	else
		dst = malloc(strlen + 1);
	if (dst == NULL)
		return (NULL);
	dst = ft_subassign(src, dst, len, start);
	return (dst);
}

static char	*ft_subassign(char *src, char *dst, size_t len, size_t start)
{
	unsigned int	i;

	i = 0;
	while (i < len && src[start + i] != '\0')
	{
		dst[i] = src[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
