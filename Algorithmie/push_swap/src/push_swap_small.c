/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 12:48:07 by wmai              #+#    #+#             */
/*   Updated: 2015/05/26 08:39:40 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int			is_small_reversed(t_circle *list)
{
	t_node		*cursor;
	int			i;

	i = 1;
	cursor = list->origin;
	if (list->length)
	{
		while (cursor->right != list->origin && \
				*(int*)cursor->data <= *(int*)cursor->right->data)
			cursor = cursor->right, ++i;
		if (i == list->length)
			return (1);
	}
	return (0);
}

void		push_swap_small(t_circle *list_a, t_circle *list_b)
{
	if (is_sorted_circular(list_a))
		rotate_until_index_a(list_a, list_b, get_min(list_a));
	else if (is_small_reversed(list_a))
	{
		rotate(list_a, list_b, RRA, 1);
		swap(list_a, list_b, SA, 1);
		rotate(list_a, list_b, RA, 0);
	}
	else if (get_min(list_a) == 1 && get_max(list_a) == 0)
		swap(list_a, list_b, SA, 0);
	else
	{
		rotate(list_a, list_b, RRA, 1);
		swap(list_a, list_b, SA, 0);
	}
}
