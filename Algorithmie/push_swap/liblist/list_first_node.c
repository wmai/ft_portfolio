/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_first_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 07:42:31 by wmai              #+#    #+#             */
/*   Updated: 2015/04/18 14:27:15 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

void		list_first_node(t_circle *this, t_node *node)
{
	ORIGIN = node;
	ORIGIN->left = node;
	ORIGIN->right = node;
}
