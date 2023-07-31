/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:23:09 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Allocates and returns a new string, which is the result of the
 * 			concatenation of 's1' and 's2'
 * @param	s1	The prefix string
 * @param	s2	The suffix string
 * @return	The new string
 * 			NULL if the allocation fails
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*ptr;

	ptr = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	len = 0;
	while (s2[len] != '\0')
	{
		ptr[i] = s2[len];
		len++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
