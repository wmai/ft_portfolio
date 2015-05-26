/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_insert_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/05 19:29:47 by wmai              #+#    #+#             */
/*   Updated: 2015/04/27 19:55:42 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

void			list_insert_index(t_circle *this, t_node *node, int index)
{
	t_node		*tmp;

	if (index > this->length)
		throw_error("[list_insert_index] Index to insert unavailable.");
	else if (index == 0)
	{
		list_insert_last(this, node);
		list_rotate(this, 1, LEFT);
		this->length -= 1;
	}
	else
	{
		tmp = ORIGIN;
		while (index)
			tmp = tmp->right, --index;
		node->left = tmp->left;
		node->right = tmp;
		tmp->right = tmp->left->right->right;
		tmp->left->right = node;
		tmp->left = node;
	}
	this->length += 1;
}
