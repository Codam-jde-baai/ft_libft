/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 14:32:08 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Duplicates a string
 * @param	s1	String to duplicate
 * @return	Pointer to the duplicated string
 * 			NULL if the allocation fails
 */
char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	while (s1[i] != '\0')
		i++;
	i++;
	ptr = malloc(i);
	if (ptr == NULL)
		return (NULL);
	while (i > 0)
	{
		i--;
		ptr[i] = s1[i];
	}
	return (ptr);
}
