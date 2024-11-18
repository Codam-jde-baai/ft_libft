/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/28 21:17:58 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2024/11/18 10:06:53 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
int		getnl_strlen(const char *s);
char	*getnl_strdup(const char *s1);
char	*getnl_copy(char *input, int len, char **ptr);
char	*getnl_join(char *str1, char *str2, char **ptr);
char	*free_return(char **ptr);

#endif /* GET_NEXT_LINE_H */