/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 11:00:45 by wmai              #+#    #+#             */
/*   Updated: 2015/04/29 12:15:55 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int				main(int argc, char *argv[])
{
	if (argc > 1)
	{
		checks(argv, argc - 1);
		init_piles(argv, argc - 1);
	}
	write(1, "\n", 1);
	return (0);
}
