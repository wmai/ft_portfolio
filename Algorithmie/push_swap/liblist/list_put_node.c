/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_put_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 02:06:01 by wmai              #+#    #+#             */
/*   Updated: 2015/04/28 20:07:52 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

void					list_put_node(t_node *this)
{
	if (this)
	{
		if (this->type == INT)
			ft_putstr(ft_itoa(*(int*)this->data));
		else if (this->type == CHAR)
			ft_putchar(*((char*)this->data));
		else if (this->type == STRING)
			ft_putstr((char*)this->data);
	}
}
