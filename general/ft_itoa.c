/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 17:11:43 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	nb_len(long int nb);
static void	ft_rec(long int nb, char *ptr);

/**
 * @brief	Converts an integer to a string
 * @param	n	Integer to convert
 * @return	The string representation of the integer
 * 			NULL if the allocation fails
 */
char	*ft_itoa(int n)
{
	int			neg;
	long int	nb;
	int			len;
	char		*ptr;

	nb = n;
	len = nb_len(nb);
	neg = 0;
	if (n <= 0)
		neg++;
	ptr = malloc(len + neg + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[len + neg] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		nb = nb * -1;
	}
	ft_rec(nb, &ptr[len + neg - 1]);
	return (ptr);
}

static void	ft_rec(long int nb, char *ptr)
{
	if (nb >= 10)
		ft_rec((nb / 10), &ptr[-1]);
	*ptr = nb % 10 + '0';
}

static int	nb_len(long int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
