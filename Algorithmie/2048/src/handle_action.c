/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_action.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:47:10 by wmai              #+#    #+#             */
/*   Updated: 2015/03/08 01:47:36 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

void		handle_action(int key, int *values)
{
	/*
		Nettoyer cette condition dégueulasse
		et mieux gérer la configuration des couleurs.
	*/
	if (game_over(values))
	{
		init_color(14, 0, 0, 0);
		init_pair(14, COLOR_WHITE, 14);
		attron(COLOR_PAIR(14));
		mvprintw(0, 0, "  GAME OVER  ");
	}
	else
	{
		if (key == KEY_UP)
			handle_move(values, UP);
		else if (key == KEY_DOWN)
			handle_move(values, DOWN);
		else if (key == KEY_RIGHT)
			handle_move(values, RIGHT);
		else if (key == KEY_LEFT)
			handle_move(values, LEFT);
	}
}
