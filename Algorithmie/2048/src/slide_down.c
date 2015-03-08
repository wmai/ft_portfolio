/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slide_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 09:39:04 by wmai              #+#    #+#             */
/*   Updated: 2015/03/08 01:47:34 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

void	slide_down(int *values)
{
	int	column;
	int	save;
	int i;

	column = 3;
	while ((i = 16) && column >= 0)
	{
		save = -1;
		while (i - column >= 0)
		{
			if ((save != -1) && values[i - column])
			{
				values[save - column] = values[i - column];
				values[i - column] = 0;
				i = save - 4;
				save = -1;
			}
			if (values[i - column] == 0 && save == -1)
				save = i;
			i -= 4;
		}
		column--;
	}
	put_new_value(values);
	put_grid(values);
}
