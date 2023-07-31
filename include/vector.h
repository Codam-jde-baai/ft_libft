/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: juliusdebaaij <juliusdebaaij@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/28 21:06:02 by juliusdebaa   #+#    #+#                 */
/*   Updated: 2023/07/28 21:19:12 by juliusdebaa   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdint.h>

typedef struct s_vector
{
	void	*data;
	size_t	size;
	size_t	type_size;
	size_t	capacity;
	void	(*free)(void *);
}			t_vector;

/* general vec functions */
bool		ft_vec_init(t_vector *vec, size_t max_capacity, size_t type_size,
				void (*free_blocks)(void *));
void		ft_vec_free(t_vector *vec);
bool		ft_vec_resize(t_vector *vec, size_t new_size);
bool		ft_vec_add(t_vector *vec, void *data);
bool		ft_vec_remove(t_vector *vec, size_t i);
size_t		ft_vec_count(t_vector *vec, bool (*count)(void *));

/* insert or replace elements in vector */
bool		ft_vec_insert(t_vector *vec, size_t i, void *data);
bool		ft_vec_insert_multiple(t_vector *vec, size_t i, void **data);
bool		ft_vec_replace(t_vector *vec, size_t i, void *data);
bool		ft_vec_replace_multiple(t_vector *vec, size_t i, void **data);
void		ft_vec_apply(t_vector *vec, void (*apply)(void *));
void		ft_vec_napply(t_vector *vec, void (*apply)(void *), size_t start,
				size_t len);

/* find or get a specific vector */
void		*ft_vec_get(t_vector *vec, size_t index);
size_t		ft_vec_find_i(t_vector *vec, bool (*find)(void *));
void		*ft_vec_find_p(t_vector *vec, bool (*find)(void *));

#endif