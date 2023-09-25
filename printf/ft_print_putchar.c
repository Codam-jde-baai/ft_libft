/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_putchar.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 15:31:40 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/09/25 19:49:47 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_print_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
