/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 19:52:21 by wmai              #+#    #+#             */
/*   Updated: 2015/05/27 17:38:53 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

t_circle			*ft_list_copy(t_circle *this)
{
	int				i;
	t_circle		*list;
	t_node			*c;

	i = this->length;
	c = ORIGIN;
	list = ft_list_create_circular();
	while (i--)
	{
		ft_list_insert_last(list, \
			ft_list_create_node(c->data, c->type, c->arr_len));
		c = c->right;
	}
	return (list);
}
