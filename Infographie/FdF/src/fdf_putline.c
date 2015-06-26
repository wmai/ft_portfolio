/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_putline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 11:37:42 by wmai              #+#    #+#             */
/*   Updated: 2015/06/24 16:27:01 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/fdf.h"

static void			fdf_putline_case1(t_point *o, t_point *d, t_env *e)
{
	int				b;
	int				x;
	int				y;

	b = 2 * (ABS(d->x - o->x)) - (d->y - o->y);
	x = o->x;
	y = o->y + 1;
	while (y <= d->y)
	{
		y++;
		if (b >= 0)
		{
			x += (d->x > o->x ? 1 : -1);
			b += 2 * ((ABS(d->x - o->x)) - (d->y - o->y));
		}
		else
			b += (2 * ABS(d->x - o->x));
		fdf_putpixel(e, x, y, 0xFFFFFF);
	}
}

static void			fdf_putline_case2(t_point *o, t_point *d, t_env *e)
{
	int				b;
	int				x;
	int				y;

	b = 2 * (ABS(d->y - o->y)) - (d->x - o->x);
	x = o->x + 1;
	y = o->y;
	while (x <= d->x)
	{
		x++;
		if (b >= 0)
		{
			y += (d->y > o->y ? 1 : -1);
			b += (2 * ((ABS(d->y - o->y)) - (d->x - o->x)));
		}
		else
			b += (2 * (ABS(d->y - o->y)));
		fdf_putpixel(e, x, y, 0xFFFFFF);
	}
}

void				fdf_putline(t_point *o, t_point *d, t_env *e)
{
	if (ABS(d->x - o->x) < ABS(d->y - o->y))
	{
		if (o->y > d->y)
			fdf_switch_points(o, d);
		fdf_putline_case1(o, d, e);
	}
	else
	{
		if (o->x > d->x)
			fdf_switch_points(o, d);
		fdf_putline_case2(o, d, e);
	}
}
