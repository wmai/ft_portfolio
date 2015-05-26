/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_circular.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/05 09:49:46 by wmai              #+#    #+#             */
/*   Updated: 2015/05/20 12:24:45 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int				is_sorted_circular(t_circle *list)
{
	t_node		*cursor;
	t_node		*tmp_cursor;
	int			i;
	int			max;

	i = 1;
	max = -2147483647;
	tmp_cursor = list->origin;
	if (list->length == 1)
		return (1);
	while (i <= list->length)
	{
		if (max < *(int*)tmp_cursor->data)
		{
			cursor = tmp_cursor;
			max = *(int*)tmp_cursor->data;
		}
		tmp_cursor = tmp_cursor->right, i++;
	}
	i = 1;
	while (*(int*)cursor->data >= *(int*)cursor->right->data)
		cursor = cursor->right, ++i;
	if (i == list->length)
		return (1);
	return (0);
}
