/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slide_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 09:36:15 by wmai              #+#    #+#             */
/*   Updated: 2015/03/08 01:47:32 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

void	slide_up(int *values)
{
	int	column;
	int	save;
	int i;

	column = 0;
	while (!(i = 0) && column < 4)
	{
		save = -1;
		while (i < 4 * 4)
		{
			if ((save != -1) && values[column + i])
			{
				values[column + save] = values[column + i];
				values[column + i] = 0;
				i = save + 4;
				save = -1;
			}
			if (values[column + i] == 0 && save == -1)
				save = i;
			i += 4;
		}
		column++;
	}
	put_new_value(values);
	put_grid(values);
}
