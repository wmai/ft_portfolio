/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/05 17:22:51 by wmai              #+#    #+#             */
/*   Updated: 2015/05/26 11:54:54 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			bubble_sort(t_circle *list_a, t_circle *list_b)
{
	int			flag;
	int			count[2];

	flag = 0;
	count[0] = 1;
	count[1] = 1;
	while (list_a->origin && list_b->origin && \
		(!is_sorted_circular(list_a) || !is_sorted_circular(list_b)))
	{
		if (flag)
			write(1, " ", 1);
		bubble_sort_swap(list_a, list_b, count);
		bubble_sort_rotate(list_a, list_b, count);
		rotate(list_a, list_b, RR, 0), count[0]++, count[1]++;
		flag = 1;
	}
	bubble_sorted(list_a, list_b, flag);
}
