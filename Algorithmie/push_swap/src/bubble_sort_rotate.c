/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 13:50:04 by wmai              #+#    #+#             */
/*   Updated: 2015/05/21 16:52:34 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			bubble_sort_rotate(t_circle *list_a, t_circle *list_b, int *c)
{
	if (c[0] > list_a->length)
	{
		rotate(list_a, list_b, RA, 1);
		c[0] = 2;
	}
	if (c[1] > list_b->length)
	{
		rotate(list_a, list_b, RB, 1);
		c[1] = 2;
	}
}
