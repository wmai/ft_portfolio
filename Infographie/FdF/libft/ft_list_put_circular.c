/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_put_circular.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 16:07:53 by wmai              #+#    #+#             */
/*   Updated: 2015/05/28 15:38:33 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void				ft_list_put_circular(t_circle *this)
{
	t_node			*cursor;

	if (this->origin)
	{
		cursor = ORIGIN->right;
		ORIGIN->put(ORIGIN);
		while (cursor != ORIGIN)
		{
			write(1, " ", 1);
			cursor->put(cursor);
			cursor = cursor->right;
		}
	}
}
