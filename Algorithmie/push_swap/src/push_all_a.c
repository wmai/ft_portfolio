/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/28 19:27:50 by wmai              #+#    #+#             */
/*   Updated: 2015/05/25 11:43:58 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void		push_all_a(t_circle *list_a, t_circle *list_b, int space)
{
	t_node		*tmp;

	while (list_b->origin)
	{
		if (space)
			write(1, " ", 1);
		tmp = list_pop(list_b);
		list_insert_last(list_a, tmp);
		write(1, "pa", 2);
		space = 1;
	}
}
