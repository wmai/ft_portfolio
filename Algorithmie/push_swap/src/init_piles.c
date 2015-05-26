/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_piles.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 09:56:56 by wmai              #+#    #+#             */
/*   Updated: 2015/05/25 11:45:07 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			init_piles(char *argv[], int argc)
{
	t_circle	*list_a;
	t_circle	*list_b;
	int			i;
	int			*int_array;

	i = 1;
	list_a = list_create_circular();
	list_b = list_create_circular();
	int_array = split_arg(argv, argc);
	while (i <= argc)
		list_insert_index(list_a, list_create_node(&int_array[i], INT), 0), i++;
	select_algo(list_a, list_b);
}
