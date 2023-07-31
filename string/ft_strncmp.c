/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 14:50:19 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Compares two strings
 * @param	s1	First string
 * @param	s2	Second string
 * @param	n	Maximum number of characters to compare
 * @return	0 if the strings are equal,
 * 			positive if the first string is greater,
 * 			negative if the second string is greater
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	output;
	int	i;

	i = 0;
	output = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (n > 0 && output == 0))
	{
		if ((s1[i] == '\0' || s2[i] == '\0') && n > 0)
		{
			output = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (output);
		}
		output = (unsigned char)s1[i] - (unsigned char)s2[i];
		n--;
		i++;
	}
	return (output);
}
