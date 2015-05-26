/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_large.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 18:01:54 by wmai              #+#    #+#             */
/*   Updated: 2015/05/25 13:48:03 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void		push_swap_large(t_circle *list_a, t_circle *list_b)
{
	while (list_b->origin && !is_sorted(list_a, list_b))
	{
		write(1, " ", 1);
		rotate_until_index_b(list_a, list_b, get_max(list_b));
		push(list_a, list_b, PA, 0);
	}
}
