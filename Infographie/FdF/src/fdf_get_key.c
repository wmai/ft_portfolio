/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_get_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 07:51:27 by wmai              #+#    #+#             */
/*   Updated: 2015/06/24 16:46:25 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/fdf.h"

static void		fdf_key_transform(t_env *e, int keycode)
{
	if (keycode == 13)
		e->map->m_y -= 1.1 * (e->map->sp / 2);
	else if (keycode == 0)
		e->map->m_x -= 1.1 * (e->map->sp / 2);
	else if (keycode == 1)
		e->map->m_y += 1.1 * (e->map->sp / 2);
	else if (keycode == 2)
		e->map->m_x += 1.1 * (e->map->sp / 2);
	else if (keycode == 24)
	{
		e->map->sp *= 1.5;
		e->map->zo *= 1.5;
	}
	else if (keycode == 27 && (e->map->sp / 1.5) > 2 && (e->map->zo / 1.5) > 0)
	{
		e->map->sp /= 1.5;
		e->map->zo /= 1.5;
	}
	else if (keycode == 126)
		e->map->zo *= 1.1;
	else if (keycode == 125)
		e->map->zo = (e->map->zo / 1.1 > 0) ? (e->map->zo /= 1.1) : e->map->zo;
}

int				fdf_get_key(int keycode, t_env *e)
{
	if (keycode == 53)
	{
		free(e);
		exit(0);
	}
	else if (keycode == 51)
	{
		e->map = fdf_init_map(e->map->coor);
		fdf_draw(e->map, e, NOT_TO_MALLOC);
	}
	else if (keycode == 13 || keycode == 0 || keycode == 1 || keycode == 2 || \
		keycode == 27 || keycode == 24 || keycode == 126 || keycode == 125)
	{
		fdf_key_transform(e, keycode);
		fdf_draw(e->map, e, NOT_TO_MALLOC);
	}
	return (0);
}
