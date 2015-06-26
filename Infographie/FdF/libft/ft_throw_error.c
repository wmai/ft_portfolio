/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_throw_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 22:12:53 by wmai              #+#    #+#             */
/*   Updated: 2015/05/27 15:54:53 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void			ft_throw_error(char *error)
{
	char		*str;

	str = ft_strjoin("\x1B[31mError : \033[0m", error);
	ft_putstr_fd(str, 1);
	ft_putstr_fd("\n", 1);
	exit(EXIT_FAILURE);
}
