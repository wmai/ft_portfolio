/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throw_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 22:12:53 by wmai              #+#    #+#             */
/*   Updated: 2015/04/18 14:27:10 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

void			throw_error(char *error)
{
	char		*str;

	str = ft_strjoin("\x1B[31mError : \033[0m", error);
	ft_putstr_fd(str, 1);
	ft_putstr_fd("\n", 1);
	exit(EXIT_FAILURE);
}
