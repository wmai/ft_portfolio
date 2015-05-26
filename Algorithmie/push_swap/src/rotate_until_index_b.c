/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_until_index_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 19:28:37 by wmai              #+#    #+#             */
/*   Updated: 2015/05/26 12:05:11 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void		rotate_until_index_b(t_circle *list_a, t_circle *list_b, int x)
{
	int		i;

	i = 0;
	if (x >= list_b->length / 2)
	{
		while (i != list_b->length - 1 - x)
		{
			if (i)
				write(1, " ", 1);
			rotate(list_a, list_b, RB, 0), ++i;
		}
	}
	else
	{
		while (i != x + 1)
		{
			if (i)
				write(1, " ", 1);
			rotate(list_a, list_b, RRB, 0), ++i;
		}
	}
	if (i)
		write(1, " ", 1);
}
