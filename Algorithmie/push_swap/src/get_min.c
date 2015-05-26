/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 19:28:12 by wmai              #+#    #+#             */
/*   Updated: 2015/04/28 19:46:13 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int			get_min(t_circle *list)
{
	t_node	*cursor;
	int		i;
	int		index;
	int		tmp;

	if (!list->origin)
		return (-42);
	cursor = list->origin->right;
	i = 1;
	index = 0;
	tmp = *(int*)list->origin->data;
	while (cursor != list->origin)
	{
		if (tmp >= *(int*)cursor->data)
		{
			tmp = *(int*)cursor->data;
			index = i;
		}
		i++;
		cursor = cursor->right;
	}
	return (index);
}
