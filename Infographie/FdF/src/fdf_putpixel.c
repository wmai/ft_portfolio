/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_putpixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/04 13:40:44 by wmai              #+#    #+#             */
/*   Updated: 2015/06/24 15:39:29 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/fdf.h"

void				fdf_putpixel(t_env *e, int x, int y, int color)
{
	int				begin;

	begin = (x * e->bpp / 8) + (y * e->size_line);
	if (x >= 0 && x < WIN_W && y >= 0 && y < WIN_H)
		ft_memcpy(e->addr + begin, &color, (e->bpp / 8));
}
