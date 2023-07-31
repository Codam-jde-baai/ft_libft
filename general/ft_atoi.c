/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 13:46:12 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 21:01:30 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Converts a string to an integer
 * @param	str		String to convert
 * @return	Integer converted from the string
 * @warning	Does not check for integer overflow
 */
int	ft_atoi(const char *str)
{
	int	output;
	int	negpos;
	int	i;

	i = 0;
	negpos = 0;
	output = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45)
		negpos--;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while ((str[i] >= 48 && str[i] <= 57) && str[i] != '\0')
	{
		output = output * 10 + (str[i] - '0');
		i++;
	}
	if (negpos < 0)
		output = output * -1;
	return (output);
}
