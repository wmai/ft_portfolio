/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/05 21:01:31 by wmai              #+#    #+#             */
/*   Updated: 2015/04/18 14:27:12 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

void			list_reverse(t_circle *this)
{
	t_node		*tmp;
	t_node		*cursor;
	int			i;

	i = 0;
	cursor = ORIGIN;
	while (i++ < this->length)
	{
		tmp = cursor->right;
		cursor->right = cursor->left;
		cursor->left = tmp;
		cursor = tmp;
	}
	list_rotate(this, 1, RIGHT);
}
