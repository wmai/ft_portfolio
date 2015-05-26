/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 16:54:46 by wmai              #+#    #+#             */
/*   Updated: 2015/05/05 20:15:49 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			swap(t_circle *list_a, t_circle *list_b, int op, int space)
{
	t_node		*node;

	if (op == SA)
	{
		node = list_pop(list_a);
		list_insert_index(list_a, node, list_a->length - 1);
	}
	else if (op == SB)
	{
		node = list_pop(list_b);
		list_insert_index(list_b, node, list_b->length - 1);
	}
	else if (op == SS)
	{
		node = list_pop(list_a);
		list_insert_index(list_a, node, list_a->length - 1);
		node = list_pop(list_b);
		list_insert_index(list_b, node, list_b->length - 1);
	}
	else
		throw_error("[swap] Wrong move asked.");
	putop(op);
	if (space)
		write(1, " ", 1);
}
