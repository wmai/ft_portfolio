/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_init_env.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/04 13:29:42 by wmai              #+#    #+#             */
/*   Updated: 2015/06/26 23:10:23 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/fdf.h"

void			fdf_init_env(t_env *e, t_circle *coor)
{
	if (!(e->mlx = mlx_init()))
		ft_throw_error("[mlx_init] Failed");
	if (!(e->win = mlx_new_window(e->mlx, WIN_W, WIN_H, \
			"FdF - William MAI (wmai)")))
		ft_throw_error("[mlx_new_window] Failed");
	if (!(e->img = mlx_new_image(e->mlx, WIN_W, WIN_H)))
		ft_throw_error("[mlx_new_image] Failed");
	if (!(e->addr = mlx_get_data_addr(e->img, &e->bpp, &e->size_line, \
			&e->endian)))
		ft_throw_error("[mlx_get_data_addr] Failed");
	e->map = fdf_init_map(coor);
	fdf_draw(e->map, e, TO_MALLOC);
	mlx_key_hook(e->win, &fdf_get_key, e);
	mlx_expose_hook(e->win, &fdf_get_expose, e);
	mlx_hook(e->win, 2, 1, &fdf_get_key, e);
	mlx_loop(e->mlx);
}
