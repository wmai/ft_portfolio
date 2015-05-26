/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/29 12:16:09 by wmai              #+#    #+#             */
/*   Updated: 2015/05/25 13:47:51 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void				checks(char *argv[], int argc)
{
	int				i;

	i = 1;
	while (i <= argc)
	{
		if (!ft_isnum(argv[i]))
			throw_error("[checks] Argument(s) given isn't numeric.");
		if (argv[i][0] == '+')
			argv[i]++;
		if (ft_strcmp(ft_itoa(ft_atoi(argv[i])), argv[i]))
			throw_error("[checks] Argument(s) given isn't an integer.");
		i++;
	}
}
