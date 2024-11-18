/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_nb.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 17:33:20 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/29 13:54:43 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*ft_itoa(int n);
static int	nb_len(long int nb);
static void	ft_rec(long int nb, char *ptr);

int	ft_print_nb(int nb)
{
	int		output;
	char	*str;

	str = ft_itoa(nb);
	output = ft_print_putstr(str);
	free(str);
	return (output);
}

/**
 * @brief	Converts an integer to a string
 * @param	n	Integer to convert
 * @return	The string representation of the integer
 * 			NULL if the allocation fails
 */
static char	*ft_itoa(int n)
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
