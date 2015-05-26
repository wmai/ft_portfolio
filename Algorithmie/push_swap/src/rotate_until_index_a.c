/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_until_index_a.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 13:12:23 by wmai              #+#    #+#             */
/*   Updated: 2015/05/26 12:05:00 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void		rotate_until_index_a(t_circle *list_a, t_circle *list_b, int x)
{
	int		i;

	i = 0;
	if (x >= list_a->length / 2)
	{
		while (i != list_a->length - 1 - x)
		{
			if (i)
				write(1, " ", 1);
			rotate(list_a, list_b, RA, 0), ++i;
		}
	}
	else
	{
		while (i != x + 1)
		{
			if (i)
				write(1, " ", 1);
			rotate(list_a, list_b, RRA, 0), ++i;
		}
	}
	if (i)
		write(1, " ", 1);
}
