/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 17:06:00 by wmai              #+#    #+#             */
/*   Updated: 2015/05/27 15:51:34 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void			ft_list_rotate(t_circle *this, int index, int dir)
{
	int			i;

	i = 0;
	while (i != index)
	{
		if (dir)
			ORIGIN = ORIGIN->right;
		else if (!dir)
			ORIGIN = ORIGIN->left;
		else
			ft_throw_error("[ft_list_rotate] Wrong direction.");
		i++;
	}
}
