/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_create_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 01:26:26 by wmai              #+#    #+#             */
/*   Updated: 2015/04/18 14:27:16 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

t_node					*list_create_node(void *data, int type)
{
	t_node				*node;

	if (!(node = (t_node *)malloc(sizeof(t_node))))
		throw_error("[list_create_node] Malloc failed.");
	node->data = data;
	node->type = type;
	node->left = node;
	node->right = node;
	node->put = &list_put_node;
	return (node);
}
