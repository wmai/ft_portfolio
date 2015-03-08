/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 09:37:35 by wmai              #+#    #+#             */
/*   Updated: 2015/03/08 01:47:35 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

int				check_dir(int *values, int dir)
{
	/*
		Cette fonction doit vérifier que des slides directionnelles peuvent êre effectués.
		Pour cela, les conditions suivantes sont requises :
			- Au moins une fusion peut être effectué.
			- Les blocks doivent avoir des espaces vides en eux.
				exemple (slide down):	
					2 0 0 0
					0 4 8 8
					4 8 4 8
					8 4 8 4 (Même si aucunes fusion n'est faisable en slide down,
							le deux (en haut à droite) a un espace libre
							en dessous pour se déplacer)
	*/
	int			i;

	i = 0;
	while (i < 4 * dir)
	{
		if ((values[i] == 0 && values[i + dir]) || values[i] == values[i + dir])
			return (1);
		else if (values[i] && (values[i + dir] == 0) && (values[i + dir * 2]))
			return (1);
		else if (values[i] == values[i + dir])
			return (1);
		i += dir;
	}
	return (0);
}

void			rotate_values(int *values)
{
	int			i;
	int			j;

	i = 0;
	while (i < 8)
	{
		j = values[15 - i];
		values[15 - i] = values[i];
		values[i] = j;
		i++;
	}
}

int				check_mouv(int *values, int dir)
{
	int			ret;
	int			i;

	i = 0;
	if (dir == RIGHT || dir == DOWN)
	{
		rotate_values(values);
		while (i < 4)
		{
			ret = (dir == RIGHT) ? check_dir(values + (i * 4), HORIZONTAL) :\
									check_dir(values + i, VERTICAL);
			i++;
		}
		rotate_values(values);
	}
	else
	{
		while (i < 4)
		{
			ret = (dir == LEFT) ? check_dir(values + (i * 4), HORIZONTAL) :
									check_dir(values + i, VERTICAL);
			i++;
		}
	}
	return (ret);
}

static void		merge_case(int *values, int direction)
{
	int			i;

	i = 0;
	while (i < 4)
	{
		if (direction == LEFT)
			fusion(values + (i * 4), HORIZONTAL), i++;
		else if (direction == RIGHT)
		{
			rotate_values(values);
			fusion(values + (i * 4), HORIZONTAL), i++;
			rotate_values(values);
		}
		else if (direction == UP)
			fusion(values + i, VERTICAL), i++;
		else
		{
			rotate_values(values);
			fusion(values + i, VERTICAL), i++;
			rotate_values(values);
		}
	}
}

void			handle_move(int *values, int direction)
{
	if (check_mouv(values, direction) != 0)
	{
		merge_case(values, direction);
		if (direction == UP)
			slide_up(values);
		else if (direction == DOWN)
			slide_down(values);
		else if (direction == LEFT)
			slide_left(values);
		else if (direction == RIGHT)
			slide_right(values);
	}
}
