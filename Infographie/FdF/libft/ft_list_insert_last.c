/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_insert_last.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 16:41:53 by wmai              #+#    #+#             */
/*   Updated: 2015/05/27 15:53:01 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void			ft_list_insert_last(t_circle *this, t_node *node)
{
	if (ORIGIN == NULL)
	{
		ft_list_first_node(this, node);
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
