/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_delete.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 21:23:17 by wmai              #+#    #+#             */
/*   Updated: 2015/04/21 18:08:28 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

void			list_delete(t_circle *this, int index)
{
	t_node		*target;

	if (index >= this->length)
		throw_error("[list_delete] Index to delete unavailable.");
	else if (index == 0)
		free(list_shift(this));
	else if (index + 1 == this->length)
		free(list_pop(this));
	else
	{
		target = ORIGIN;
		while (index-- - 1)
			target = target->right;
		target->left->right = target->right;
		target->right->left = target->left;
		free(target);
	}
	this->length -= 1;
}
