/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 15:22:26 by wmai              #+#    #+#             */
/*   Updated: 2015/05/26 11:55:56 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			push_all_b(t_circle *list_a, t_circle *list_b, int space)
{
	t_node		*tmp;

	while (list_a->origin)
	{
		if (space)
			write(1, " ", 1);
		tmp = list_pop(list_a);
		list_insert_last(list_b, tmp);
		write(1, "pb", 2);
		space = 1;
	}
}
