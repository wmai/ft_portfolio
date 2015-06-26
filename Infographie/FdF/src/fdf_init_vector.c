/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_init_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 11:39:51 by wmai              #+#    #+#             */
/*   Updated: 2015/06/24 16:30:39 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/fdf.h"

static void			fdf_fill_vector_y(t_map *m, t_vector **v)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	t_node			*c;

	i = 0;
	j = 0;
	k = 0;
	c = m->coor->origin;
	while (i < ((m->height - 1) * m->width))
	{
		v[i]->o->x = (m->m_x - (m->sp * j)) + (m->sp * k);
		v[i]->o->y = m->m_y - (((int*)c->data)[k] * m->zo) + (m->sp * j);
		v[i]->d->x = (m->m_x - (m->sp * j)) + (m->sp * k) - m->sp;
		v[i]->d->y = m->m_y - (((int*)c->right->data)[k] * m->zo)\
			+ (m->sp * j) + m->sp;
		k++;
		if (k == m->width)
		{
			j++;
			k = 0;
			c = c->right;
		}
		i++;
	}
}

static void			fdf_fill_vector_x(t_map *m, t_vector **v)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	t_node			*c;

	i = 0;
	j = 0;
	k = 0;
	c = m->coor->origin;
	while (i < ((m->width - 1) * m->height))
	{
		v[i]->o->x = (m->m_x - (m->sp * j)) + (m->sp * k);
		v[i]->o->y = m->m_y - (((int*)c->data)[k] * m->zo) + (m->sp * j);
		v[i]->d->x = (m->m_x - (m->sp * j)) + (m->sp * k) + m->sp;
		v[i]->d->y = m->m_y - (((int*)c->data)[k + 1] * m->zo) + (m->sp * j);
		k++;
		if (k == m->width - 1)
		{
			j++;
			k = 0;
			c = c->right;
		}
		i++;
	}
}

static void			fdf_malloc_points(t_vector *v)
{
	if (!(v->o = (t_point *)malloc(sizeof(t_point))))
		ft_throw_error("[t_point* malloc] Failed.");
	if (!(v->d = (t_point *)malloc(sizeof(t_point))))
		ft_throw_error("[t_point* malloc] Failed.");
}

static void			fdf_malloc_vectors(t_map *m)
{
	unsigned int	i;

	i = 0;
	if (!(m->vector_x = (t_vector **)malloc(sizeof(t_vector *) * \
			(m->height * (m->width - 1)))) || \
		!(m->vector_y = (t_vector **)malloc(sizeof(t_vector *) * \
			(m->width * (m->height - 1)))))
		ft_throw_error("[t_vector** malloc] Failed.");
	while (i < (unsigned int)(m->height * (m->width - 1)))
	{
		if (!((m)->vector_x[i] = (t_vector *)malloc(sizeof(t_vector))))
			ft_throw_error("[t_vector* malloc] Failed.");
		fdf_malloc_points((m)->vector_x[i]);
		i++;
	}
	i = 0;
	while (i < (unsigned int)(m->width * (m->height - 1)))
	{
		if (!((m)->vector_y[i] = (t_vector *)malloc(sizeof(t_vector))))
			ft_throw_error("[t_vector* malloc] Failed.");
		fdf_malloc_points((m)->vector_y[i]);
		i++;
	}
}

void				fdf_init_vector(t_map *m, int to_malloc)
{
	if (to_malloc)
		fdf_malloc_vectors(m);
	fdf_fill_vector_x(m, (m)->vector_x);
	fdf_fill_vector_y(m, (m)->vector_y);
}
