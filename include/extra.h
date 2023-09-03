/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extra.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/28 21:10:20 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2023/09/03 19:53:20 by jde-baai      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRA_H
# define EXTRA_H

#include "libft.h"

void		ft_free_array(char **str);
char		**ft_dup_array(char **str);
void		*ft_realloc(void *ptr, size_t size);
size_t		array_len(char **array);

#endif /* EXTRA_H */