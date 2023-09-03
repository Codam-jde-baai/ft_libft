/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   array_len.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/03 19:48:23 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/09/03 19:49:08 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	array_len(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}
