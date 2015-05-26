/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort_swap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/20 13:16:28 by wmai              #+#    #+#             */
/*   Updated: 2015/05/26 12:06:33 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			bubble_sort_swap(t_circle *list_a, t_circle *list_b, int *cnt)
{
	int			both;
	int			op;

	both = 0;
	op = 99;
	if (*(int*)list_a->origin->left->data > \
		*(int*)list_a->origin->left->left->data && \
		cnt[0] <= list_a->length + 1)
	{
		op = SA;
		both++;
	}
	if (*(int*)list_b->origin->left->data > \
		*(int*)list_b->origin->left->left->data && \
		cnt[1] <= list_b->length + 1)
	{
		op = SB;
		both++;
	}
	if (both == 2)
		op = SS;
	if (op != 99)
		swap(list_a, list_b, op, 1);
}
