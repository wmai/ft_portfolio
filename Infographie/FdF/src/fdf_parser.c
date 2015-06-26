/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/04 13:30:20 by wmai              #+#    #+#             */
/*   Updated: 2015/06/23 11:53:59 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/fdf.h"

static int			*fdf_int_arr_new(char **altitudes, int size_line)
{
	int				*array;
	unsigned int	i;

	i = 0;
	if ((array = (int *)malloc(sizeof(int) * size_line)))
	{
		while (altitudes[i])
		{
			if (!ft_isnum(altitudes[i]))
				ft_throw_error("Altitude(s) given isn't numeric.");
			if (altitudes[i][0] == '+')
				altitudes[i]++;
			if (ft_strcmp(ft_itoa(ft_atoi(altitudes[i])), altitudes[i]))
				ft_throw_error("Altitude(s) given isn't an integer.");
			array[i] = ft_atoi(altitudes[i]);
			i++;
		}
	}
	else
		ft_throw_error("[fdf_int_arr_new] Malloc failed.");
	return (array);
}

void				fdf_parser(t_circle *coor, char const *str)
{
	char			**str_arr;
	int				i;
	int				size_line;

	i = 0;
	size_line = 0;
	str_arr = ft_strsplit(str, 32);
	while (str_arr[size_line])
		size_line++;
	ft_list_insert_last(coor, \
		ft_list_create_node(\
			fdf_int_arr_new(str_arr, size_line), INT_ARRAY, size_line));
}
