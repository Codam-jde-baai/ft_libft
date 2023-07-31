/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/23 14:08:53 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Writes the given integer to the given file descriptor
 * @param	n	Integer to write
 * @param	fd	File descriptor to write to
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == 0)
		write(fd, "0", 1);
	else if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = n * -1;
			write(fd, "-", 1);
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		c = (n % 10) + '0';
		write(fd, &c, 1);
	}
}
