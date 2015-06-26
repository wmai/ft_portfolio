/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_put_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 02:06:01 by wmai              #+#    #+#             */
/*   Updated: 2015/05/27 17:41:22 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void					ft_list_put_node(t_node *this)
{
	int					i;

	i = 0;
	if (this)
	{
		if (this->type == INT)
			ft_putstr(ft_itoa(*(int *)this->data));
		else if (this->type == CHAR)
			ft_putchar(*((char *)this->data));
		else if (this->type == STRING)
			ft_putstr((char *)this->data);
		else if (this->type == INT_ARRAY)
		{
			while (i < this->arr_len)
			{
				ft_putstr(ft_itoa(((int *)this->data)[i])), i++;
				if (i < this->arr_len)
					write(1, " ", 1);
			}
		}
	}
}
