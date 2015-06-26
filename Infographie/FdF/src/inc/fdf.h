/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 11:07:17 by wmai              #+#    #+#             */
/*   Updated: 2015/06/24 16:52:07 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <fcntl.h>
# include <math.h>
# include "../../libft/inc/libft.h"
# include "../../gnl/inc/get_next_line.h"
# include "../../minilibx_macos/mlx.h"

/*
****************** DEFINES ****************************************************
*/
# define WIN_W	1100
# define WIN_H	800
# define ABS(a) ((a < 0) ? (-(a)) : (a))
# define RGB(r, g, b)(256 * 256 * (int)(r) + 256 * (int)(g) + (int)(b))
# define TO_MALLOC 1
# define NOT_TO_MALLOC 0

/*
****************** STRUCTS ****************************************************
*/
typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_vector
{
	t_point			*o;
	t_point			*d;
}					t_vector;

typedef struct		s_map
{
	t_circle		*coor;
	t_vector		**vector_x;
	t_vector		**vector_y;
	unsigned int	width;
	unsigned int	height;
	int				sp;
	double			zo;
	int				m_x;
	int				m_y;
}					t_map;

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	void			*img;
	int				endian;
	int				bpp;
	int				size_line;
	char			*addr;
	t_map			*map;
}					t_env;

/*
****************** GENERAL ****************************************************
*/
void				fdf_parser(t_circle *list, char const *str);
void				fdf_init_env(t_env *e, t_circle *coor);
t_map				*fdf_init_map(t_circle *coor);
void				fdf_init_vector(t_map *m, int to_malloc);
void				fdf_draw(t_map *m, t_env *e, int to_malloc);
void				fdf_fill_img(t_env *e);
void				fdf_putline(t_point *o, t_point *d, t_env *e);
void				fdf_switch_points(t_point *o, t_point *d);
void				fdf_putpixel(t_env *e, int x, int y, int color);
int					fdf_color(double t);
int					fdf_get_key(int keycode, t_env *e);
int					fdf_get_expose(t_env *e);

#endif
