/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_shift.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/07 20:46:14 by wmai              #+#    #+#             */
/*   Updated: 2015/04/18 14:27:11 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

t_node			*list_shift(t_circle *this)
{
	t_node		*target;

	if (ORIGIN->left != ORIGIN)
	{
		target = ORIGIN;
		ORIGIN->left->right = ORIGIN->right;
		ORIGIN->right->left = ORIGIN->left;
		ORIGIN = ORIGIN->right;
	}
	else
	{
		target = ORIGIN;
		ORIGIN = NULL;
	}
	this->length -= 1;
	return (target);
}
