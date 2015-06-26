/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_first_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/01 07:42:31 by wmai              #+#    #+#             */
/*   Updated: 2015/05/27 15:52:59 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void		ft_list_first_node(t_circle *this, t_node *node)
{
	ORIGIN = node;
	ORIGIN->left = node;
	ORIGIN->right = node;
}
