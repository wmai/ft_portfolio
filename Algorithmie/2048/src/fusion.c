/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fusion.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 05:47:11 by wmai              #+#    #+#             */
/*   Updated: 2015/03/08 01:47:39 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

void	fusion(int *line, int d)
{
	int	save;
	int i;

	i = 0;
	save = -1;
	while (i < 4 * d)
	{
		if (line[save] == line[i] && line[i] != 0)
		{
			if (d == HORIZONTAL || ((i - save) % d) == 0)
			{
				line[save] *= 2;
				line[i] = 0;
				save = -1;
			}
		}
		else if (line[i] != 0)
			save = i;
		i += d;
	}
}
