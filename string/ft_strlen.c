/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:09:48 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/28 20:14:31 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/**
 * @brief	Calculates the length of a string
 * @param	s	String to calculate the length of
 * @return	Length of the string
 */
size_t	ft_strlen(const char *s) {
  unsigned int i;

  i = 0;
  while (s[i] != '\0')
    i++;
  return (i);
}
