/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_medium.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 14:24:52 by wmai              #+#    #+#             */
/*   Updated: 2015/05/25 13:10:40 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void		push_swap_medium(t_circle *list_a, t_circle *list_b)
{
	while (list_b->origin && !is_sorted(list_a, list_b))
	{
		write(1, " ", 1);
		rotate_until_index_b(list_a, list_b, get_max(list_b));
		push(list_a, list_b, PA, 0);
	}
}
