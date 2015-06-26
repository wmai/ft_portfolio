/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_draw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 12:30:44 by wmai              #+#    #+#             */
/*   Updated: 2015/06/23 19:01:07 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/fdf.h"

void				fdf_draw(t_map *m, t_env *e, int to_malloc)
{
	unsigned int	i;
	t_vector		**vx;
	t_vector		**vy;

	fdf_fill_img(e);
	fdf_init_vector(m, to_malloc);
	i = 0;
	vx = (m)->vector_x;
	vy = (m)->vector_y;
	while (i < (unsigned int)((m->width - 1) * m->height))
		fdf_putline(vx[i]->o, vx[i]->d, e), i++;
	i = 0;
	while (i < (unsigned int)((m->height - 1) * m->width))
		fdf_putline(vy[i]->o, vy[i]->d, e), i++;
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
}
