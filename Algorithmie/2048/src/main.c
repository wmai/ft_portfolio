/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 20:44:55 by wmai              #+#    #+#             */
/*   Updated: 2015/03/08 01:47:35 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

int			*init_values(void)
{
	int		*new;
	int		i;

	if (!(new = (int *)malloc(sizeof(int) * 16)))
		return (NULL);
	i = 0;
	while (i < 16)
	{
		new[i] = 0;
		i++;
	}
	put_new_value(new);
	put_new_value(new);
	return (new);
}

int			main(void)
{
	int		*values;
	int		key;

	initscr();
	noecho();
	init_all_color();
	keypad(stdscr, TRUE);
	values = init_values();
	put_grid(values);
	while ((key = getch()) != 27)
		handle_action(key, values);
	endwin();
	return (0);
}
