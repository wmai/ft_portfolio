/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_unitary.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/05 19:18:42 by wmai              #+#    #+#             */
/*   Updated: 2015/05/21 16:13:06 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int				is_sorted_unitary(t_circle *list)
{
	t_node		*cursor;
	int			i;

	i = 1;
	cursor = list->origin;
	if (list->length)
	{
		while (cursor->right != list->origin && \
				*(int*)cursor->data >= *(int*)cursor->right->data)
			cursor = cursor->right, ++i;
		if (i == list->length)
			return (1);
	}
	return (0);
}
