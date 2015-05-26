/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_insert_last.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 16:41:53 by wmai              #+#    #+#             */
/*   Updated: 2015/04/21 17:24:49 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

void			list_insert_last(t_circle *this, t_node *node)
{
	if (ORIGIN == NULL)
	{
		list_first_node(this, node);
	}
	else if (ORIGIN->right != ORIGIN)
	{
		ORIGIN->left->right = node;
		node->left = ORIGIN->left;
		node->right = ORIGIN;
		ORIGIN->left = node;
	}
	else
	{
		node->right = ORIGIN;
		node->left = ORIGIN;
		ORIGIN->right = node;
		ORIGIN->left = node;
	}
	this->length += 1;
}
