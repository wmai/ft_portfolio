/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/20 12:19:01 by wmai              #+#    #+#             */
/*   Updated: 2015/05/20 12:24:39 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int			get_max(t_circle *list)
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
		if (tmp <= *(int*)cursor->data)
		{
			tmp = *(int*)cursor->data;
			index = i;
		}
		i++;
		cursor = cursor->right;
	}
	return (index);
}
