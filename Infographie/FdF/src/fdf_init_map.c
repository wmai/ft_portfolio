/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_init_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 11:45:18 by wmai              #+#    #+#             */
/*   Updated: 2015/06/19 14:59:29 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/fdf.h"

t_map			*fdf_init_map(t_circle *coor)
{
	t_map		*map;

	if (!(map = (t_map *)malloc(sizeof(t_map))))
		ft_throw_error("[t_map* malloc] Failed.");
	map->coor = coor;
	map->vector_x = NULL;
	map->vector_y = NULL;
	if (!(map->width = (unsigned int)coor->origin->arr_len) || \
		!(map->height = (unsigned int)coor->length))
		ft_throw_error("Empty map.");
	map->zo = 1;
	if (map->width > map->height)
		map->sp = (2 * WIN_H / 3) / map->height / 2;
	else
		map->sp = (2 * WIN_W / 3) / map->width / 2;
	map->m_x = WIN_W / 3.5;
	map->m_y = WIN_H / 8;
	return (map);
}
