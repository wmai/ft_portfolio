/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 14:01:25 by nbeydon           #+#    #+#             */
/*   Updated: 2015/03/08 01:47:36 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

static void		put_horizontal_line(int width, int height)
{
	int			x;
	int			y;
	int			i;
	int			case_height;

	i = 1;
	case_height = (height - 5) / 4;
	y = 0;
	while (!(x = 0) && i <= 5)
	{
		attron(A_REVERSE);
		hline(' ', width);
		attroff(A_REVERSE);
		y = case_height * i + i;
		move(y, 0);
		i++;
	}
	move(0, 0);
}

static void		put_vertical_line(int width, int height)
{
	int			x;
	int			y;
	int			i;
	int			case_width;

	i = 1;
	case_width = (width - 5) / 4;
	x = 0;
	while (!(y = 0) && i <= 5)
	{
		attron(A_REVERSE);
		vline(' ', height);
		attroff(A_REVERSE);
		x = case_width * i + i;
		move(0, x);
		i++;
	}
	move(0, 0);
}

static void		fill_case(int case_width, int case_height, int value)
{
	int			x;
	int			y;
	int			i;

	i = 0;
	(void)value;
	getyx(stdscr, y, x);
	while (i < case_height)
	{
		move(y + i, x);
		case_color(value);
		hline(' ', case_width);
		i++;
	}
	move(y + i / 2, x + case_width / 2);
	printw("%d", value);
	disable_color(value);
}

static void		fill_grid(int width, int height, int *values)
{
	int			x;
	int			y;
	int			case_height;
	int			case_width;

	case_height = (height - 5) / 4;
	case_width = (width - 5) / 4;
	y = 0;
	while (y < 4 && !(x = 0))
	{
		while (x < 4)
		{
			move(case_height * y + y + 1, case_width * x + x + 1);
			fill_case(case_width, case_height, *values);
			values++;
			x++;
		}
		y++;
	}
	move(0, 0);
}

void			put_grid(int *values)
{
	int			max_cols;
	int			max_lines;

	clear();
	max_lines = LINES - ((LINES - 5) % 4);
	max_cols = COLS - ((COLS - 5) % 4);
	put_horizontal_line(max_cols, max_lines);
	put_vertical_line(max_cols, max_lines);
	fill_grid(max_cols, max_lines, values);
	refresh();
}
