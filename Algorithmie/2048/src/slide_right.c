/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slide_right.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 13:56:13 by nbeydon           #+#    #+#             */
/*   Updated: 2015/03/08 01:47:33 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

void	slide_right(int *values)
{
	int	begin;
	int	save;
	int i;

	begin = 0;
	while ((i = 3) && begin <= 12)
	{
		save = -1;
		while (i >= 0)
		{
			if ((save != -1) && values[begin + i])
			{
				values[begin + save] = values[begin + i];
				values[begin + i] = 0;
				i = save - 1;
				save = -1;
			}
			if (values[begin + i] == 0 && save == -1)
				save = i;
			i--;
		}
		begin += 4;
	}
	put_new_value(values);
	put_grid(values);
}
