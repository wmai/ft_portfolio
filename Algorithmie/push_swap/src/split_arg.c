/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 09:41:09 by wmai              #+#    #+#             */
/*   Updated: 2015/05/25 13:53:19 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int				*split_arg(char *argv[], int argc)
{
	int			*int_array;
	int			i;

	int_array = malloc(sizeof(int *) * argc);
	i = 0;
	while (i <= argc)
		int_array[i] = ft_atoi(argv[i]), i++;
	return (int_array);
}
