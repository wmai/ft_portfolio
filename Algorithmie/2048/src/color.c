/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:21:30 by nbeydon           #+#    #+#             */
/*   Updated: 2015/03/08 01:46:51 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

/*
	Ces fonctions et cette foret de if sont ignobles!
	Nettoyage et fractionnement de code plus que nécessaire!
*/

void			init_all_color(void)
{
	int			i;

	start_color();
	i = 1;
	init_color(13, 0, 0, 0);
	while (i < 12)
	{
		init_color(i, 1500 * i, 1500 * i, 1500 * i);
		init_pair(i, 13, i);
		i++;
	}
}

void			case_color(int value)
{
	if (value == 0)
		attron(COLOR_PAIR(1));
	if (value == 2)
		attron(COLOR_PAIR(2));
	if (value == 4)
		attron(COLOR_PAIR(3));
	if (value == 8)
		attron(COLOR_PAIR(4));
	if (value == 16)
		attron(COLOR_PAIR(5));
	if (value == 32)
		attron(COLOR_PAIR(6));
	if (value == 64)
		attron(COLOR_PAIR(7));
	if (value == 128)
		attron(COLOR_PAIR(8));
	if (value == 256)
		attron(COLOR_PAIR(9));
	if (value == 512)
		attron(COLOR_PAIR(10));
	if (value == 1024)
		attron(COLOR_PAIR(11));
	if (value == 2058)
		attron(COLOR_PAIR(12));
}

void			disable_color(int value)
{
	if (value == 0)
		attroff(COLOR_PAIR(1));
	if (value == 2)
		attroff(COLOR_PAIR(2));
	if (value == 4)
		attroff(COLOR_PAIR(3));
	if (value == 8)
		attroff(COLOR_PAIR(4));
	if (value == 16)
		attroff(COLOR_PAIR(5));
	if (value == 32)
		attroff(COLOR_PAIR(6));
	if (value == 64)
		attroff(COLOR_PAIR(7));
	if (value == 128)
		attroff(COLOR_PAIR(8));
	if (value == 256)
		attroff(COLOR_PAIR(9));
	if (value == 512)
		attroff(COLOR_PAIR(10));
	if (value == 1024)
		attroff(COLOR_PAIR(11));
	if (value == 2048)
		attroff(COLOR_PAIR(12));
}
