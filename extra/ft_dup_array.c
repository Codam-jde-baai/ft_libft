/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dup_array.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/28 12:34:15 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2023/07/28 21:12:37 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Duplicates an array of strings
 * @param	str		Array of strings to duplicate
 * @return	Duplicated array of strings, or NULL if the allocation faile
 */
char	**ft_dup_array(char **str)
{
	int		i;
	int		j;
	char	**dup;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	dup = malloc(sizeof(char *) * (i + 1));
	if (!dup)
		return (NULL);
	while (j < i)
	{
		dup[j] = ft_strdup(str[j]);
		if (!dup[j])
		{
			ft_free_array(dup);
			return (NULL);
		}
		j++;
	}
	dup[j] = NULL;
	return (dup);
}
