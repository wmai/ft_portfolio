/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_join.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/08 22:13:03 by wmai              #+#    #+#             */
/*   Updated: 2015/05/27 17:40:46 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

t_circle			*ft_list_join(t_circle *this, t_circle *list)
{
	int				i;
	t_node			*c;

	i = list->length;
	c = list->origin;
	while (i--)
	{
		ft_list_insert_last(this, \
			ft_list_create_node(c->data, c->type, c->arr_len));
		c = c->right;
	}
	return (this);
}
