/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/07 18:43:58 by wmai              #+#    #+#             */
/*   Updated: 2015/05/11 15:17:09 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			split(t_circle *list_a, t_circle *list_b)
{
	int			i;
	t_node		*tmp;

	i = list_a->length / 2;
	while (i--)
	{
		tmp = list_pop(list_a);
		list_insert_last(list_b, tmp);
		write(1, "pb ", 3);
	}
}
