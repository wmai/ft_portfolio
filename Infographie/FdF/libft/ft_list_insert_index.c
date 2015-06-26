/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_insert_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/05 19:29:47 by wmai              #+#    #+#             */
/*   Updated: 2015/05/27 15:53:00 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void			ft_list_insert_index(t_circle *this, t_node *node, int idx)
{
	t_node		*tmp;

	if (idx > this->length)
		ft_throw_error("[ft_list_insert_idx] Index to insert unavailable.");
	else if (idx == 0)
	{
		ft_list_insert_last(this, node);
		ft_list_rotate(this, 1, LEFT);
		this->length -= 1;
	}
	else
	{
		tmp = ORIGIN;
		while (idx)
			tmp = tmp->right, --idx;
		node->left = tmp->left;
		node->right = tmp;
		tmp->right = tmp->left->right->right;
		tmp->left->right = node;
		tmp->left = node;
	}
	this->length += 1;
}
