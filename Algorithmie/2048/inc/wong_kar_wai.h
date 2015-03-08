/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wong_kar_wai.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 20:29:51 by nbeydon           #+#    #+#             */
/*   Updated: 2015/03/01 20:46:02 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WONG_KAR_WAI_H
# define WONG_KAR_WAI_H
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <curses.h>
# include <time.h>
# define HORIZONTAL 1
# define VERTICAL 4
# define UP 1
# define DOWN 2
# define LEFT 3
# define RIGHT 4

typedef enum	e_const
{
	WIN_VALUE = 2048
}				t_const;

void			put_grid(int *values);
void			put_new_value(int *values);
void			fusion(int *line, int direction);
void			xfusion_inv(int *line, int direction);
void			handle_move(int *line, int direction);
void			handle_action(int key, int *values);
void			slide_up(int *line);
void			slide_down(int *line);
void			slide_right(int *line);
void			slide_left(int *line);
int				get_and_check_const(void);
int				random_generator(void);
void			case_color(int value);
void			disable_color(int value);
void			init_all_color(void);
int				game_over(int *tab);

#endif
