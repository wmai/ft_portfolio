/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_and_check_const.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:40:30 by wmai              #+#    #+#             */
/*   Updated: 2015/03/08 01:47:37 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

int				get_and_check_const(void)
{
	t_const		value;

	value = WIN_VALUE;
	while (((value % 2) == 0) && value > 1)
		value /= 2;
	return (value == 1 ? WIN_VALUE : 0);
}
