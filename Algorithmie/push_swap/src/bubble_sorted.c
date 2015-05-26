/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/05 20:20:29 by wmai              #+#    #+#             */
/*   Updated: 2015/05/21 16:29:47 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			bubble_sorted(t_circle *list_a, t_circle *list_b, int flag)
{
	while (list_a->origin && !is_sorted_unitary(list_a))
	{
		if (flag)
			write(1, " ", 1);
		list_rotate(list_a, 1, LEFT);
		write(1, "ra", 2);
		flag = 1;
	}
	while (list_b->origin && !is_sorted_unitary(list_b))
	{
		if (flag)
			write(1, " ", 1);
		list_rotate(list_b, 1, LEFT);
		write(1, "rb", 2);
		flag = 1;
	}
}
