/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_putstr.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 15:39:22 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/29 13:56:15 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i] != '\0')
		i++;
	write(1, s, i);
	return (i);
}
