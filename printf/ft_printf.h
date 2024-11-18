/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-baai <jde-baai@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 11:02:41 by jde-baai      #+#    #+#                 */
/*   Updated: 2023/07/29 13:55:18 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <inttypes.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *fmt, ...);
int	ft_print_putchar(char c);
int	ft_print_putstr(char *s);
int	ft_print_ptr(unsigned long ptr);
int	ft_print_nb(int nb);
int	ft_print_unb(unsigned int nb);
int	ft_print_hexl(unsigned int nb);
int	ft_print_hexu(unsigned int nb);

#endif /* FT_PRINTF_H */
