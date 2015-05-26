/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_pop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 16:27:21 by wmai              #+#    #+#             */
/*   Updated: 2015/04/18 14:27:13 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

t_node			*list_pop(t_circle *this)
{
	t_node		*target;

	if (ORIGIN->left != ORIGIN)
	{
		target = ORIGIN->left;
		ORIGIN->left->left->right = ORIGIN;
		ORIGIN->left = ORIGIN->left->left;
	}
	else
	{
		target = ORIGIN;
		ORIGIN = NULL;
	}
	this->length -= 1;
	return (target);
}
