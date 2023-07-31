/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 12:02:01 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_set(char c, char const *set);
static int	ft_trimend(char const *s1, char const *set, int start);

/**
 * @brief	Allocates (with malloc(3)) and returns a copy of
 * 			's1' with the characters specified in 'set' removed
 * 			from the beginning and the end of the string.
 * @param	s1		The string to be trimmed
 * @param	set		The reference set of characters to trim
 * @return	The trimmed string. NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		len;
	char	*ptr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL || set[0] == '\0' || s1[0] == '\0')
		return (ft_strdup(s1));
	start = 0;
	while (1 == ft_set(s1[start], set) && s1[start] != '\0')
		start++;
	len = ft_trimend(s1, set, start);
	ptr = malloc((len - start) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while ((start + i) < len)
	{
		ptr[i] = s1[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static int	ft_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_trimend(char const *s1, char const *set, int start)
{
	int	len;

	len = ft_strlen(s1);
	while (1 == ft_set(s1[len - 1], set) && len > start)
		len--;
	return (len);
}
