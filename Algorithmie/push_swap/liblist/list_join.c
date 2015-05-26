/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_join.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 22:13:03 by wmai              #+#    #+#             */
/*   Updated: 2015/04/18 14:27:13 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

t_circle			*list_join(t_circle *this, t_circle *list)
{
	int				i;
	t_node			*cursor;

	i = list->length;
	cursor = list->origin;
	while (i--)
	{
		list_insert_last(this, list_create_node(cursor->data, cursor->type));
		cursor = cursor->right;
	}
	return (this);
}
