/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_create_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 01:26:26 by wmai              #+#    #+#             */
/*   Updated: 2015/05/27 17:39:38 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

t_node					*ft_list_create_node(void *data, int type, int arr_len)
{
	t_node				*node;

	if (!(node = (t_node *)malloc(sizeof(t_node))))
		ft_throw_error("[ft_list_create_node] Malloc failed.");
	node->data = data;
	node->type = type;
	node->arr_len = arr_len;
	node->left = node;
	node->right = node;
	node->put = &ft_list_put_node;
	return (node);
}
