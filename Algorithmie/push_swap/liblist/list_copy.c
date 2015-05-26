/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 19:52:21 by wmai              #+#    #+#             */
/*   Updated: 2015/04/18 14:29:01 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

t_circle			*list_copy(t_circle *this)
{
	int				i;
	t_circle		*list;
	t_node			*cursor;

	i = this->length;
	cursor = ORIGIN;
	list = list_create_circular();
	while (i--)
	{
		list_insert_last(list, list_create_node(cursor->data, cursor->type));
		cursor = cursor->right;
	}
	return (list);
}
