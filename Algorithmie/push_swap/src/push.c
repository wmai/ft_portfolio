/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 17:10:14 by wmai              #+#    #+#             */
/*   Updated: 2015/05/05 20:16:34 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			push(t_circle *list_a, t_circle *list_b, int op, int space)
{
	t_node		*tmp;

	if (op == PA)
	{
		tmp = list_pop(list_b);
		list_insert_last(list_a, tmp);
	}
	else if (op == PB)
	{
		tmp = list_pop(list_a);
		list_insert_last(list_b, tmp);
	}
	else
		throw_error("[push] List source selected unavailable.");
	putop(op);
	if (space)
		write(1, " ", 1);
}
