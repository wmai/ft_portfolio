/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_new_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:54:46 by wmai              #+#    #+#             */
/*   Updated: 2015/03/08 01:47:35 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

/*
	Pour pallier à la boucle infinie dans le cas où il n'y a plus d'espaces libre
	on a un compteur dégeulasse qui s'arrête à 1000. A changer!
*/

void		put_new_value(int *values)
{
	int		i;
	int		y;

	y = 0;
	srand(time(NULL));
	while (y++ < 1000)
	{
		if (values[(i = rand() % 16)] == 0)
		{
			values[i] = random_generator();
			y = 0;
			break ;
		}
	}
}
