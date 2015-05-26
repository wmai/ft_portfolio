/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 06:52:34 by wmai              #+#    #+#             */
/*   Updated: 2015/05/05 20:16:16 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			rotate(t_circle *list_a, t_circle *list_b, int op, int space)
{
	if (op == RA)
		list_rotate(list_a, 1, LEFT);
	else if (op == RB)
		list_rotate(list_b, 1, LEFT);
	else if (op == RR)
	{
		list_rotate(list_a, 1, LEFT);
		list_rotate(list_b, 1, LEFT);
	}
	else if (op == RRA)
		list_rotate(list_a, 1, RIGHT);
	else if (op == RRB)
		list_rotate(list_b, 1, RIGHT);
	else if (op == RRR)
	{
		list_rotate(list_a, 1, RIGHT);
		list_rotate(list_b, 1, RIGHT);
	}
	putop(op);
	if (space)
		write(1, " ", 1);
}
