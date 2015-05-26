/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 17:50:36 by wmai              #+#    #+#             */
/*   Updated: 2015/05/25 13:47:44 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			select_algo(t_circle *list_a, t_circle *list_b)
{
	if (list_a->length <= 3)
		push_swap_small(list_a, list_b);
	else
	{
		push_all_b(list_a, list_b, 0);
		push_swap_large(list_a, list_b);
	}
}
