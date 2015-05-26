/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 21:19:48 by wmai              #+#    #+#             */
/*   Updated: 2015/04/28 19:22:49 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLIST_H
# define LIBLIST_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include "../../libft/inc/libft.h"

/*
****************** DEFINES ****************************************************
*/
# define INT		0
# define CHAR		1
# define STRING		2
# define LEFT		0
# define RIGHT		1
# define ORIGIN		this->origin
# define LAST		-1
# define FIRST		0

/*
****************** STRUCTS ****************************************************
*/
typedef struct		s_node
{
	void			*data;
	int				type;
	struct s_node	*left;
	struct s_node	*right;
	void			(*put)(struct s_node *);
}					t_node;

typedef struct		s_circle
{
	struct s_node	*origin;
	int				length;
	void			(*put)(struct s_circle *);
}					t_circle;

/*
****************** GENERAL LIST TOOLS *****************************************
*/
void				throw_error(char *error);

/*
****************** CIRCULAR ***************************************************
*/
t_circle			*list_create_circular(void);
void				list_put_circular(t_circle *this);
void				list_delete(t_circle *this, int index);
t_node				*list_pop(t_circle *this);
t_node				*list_shift(t_circle *this);
t_circle			*list_copy(t_circle *this);
t_circle			*list_join(t_circle *this, t_circle *list);
void				list_rotate(t_circle *this, int index, int dir);
void				list_reverse(t_circle *this);
void				list_insert_index(t_circle *this, t_node *node, int index);
void				list_insert_last(t_circle *this, t_node *node);

/*
****************** NODE *******************************************************
*/
t_node				*list_create_node(void *data, int type);
void				list_first_node(t_circle *this, t_node *node);
void				list_put_node(t_node *this);

#endif
