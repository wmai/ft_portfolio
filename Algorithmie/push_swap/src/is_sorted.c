/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 14:33:48 by wmai              #+#    #+#             */
/*   Updated: 2015/04/28 17:46:12 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int				is_sorted(t_circle *list_a, t_circle *list_b)
{
	t_node		*cursor;
	int			i;

	i = 1;
	cursor = list_a->origin;
	if (list_a->length != 0 && list_b->length == 0)
	{
		while (cursor->right != list_a->origin && \
				*(int*)cursor->data >= *(int*)cursor->right->data)
			cursor = cursor->right, ++i;
		if (i == list_a->length)
			return (1);
	}
	return (0);
}
