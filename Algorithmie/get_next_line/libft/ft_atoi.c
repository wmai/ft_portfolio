/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 22:06:08 by wmai              #+#    #+#             */
/*   Updated: 2014/11/25 18:54:40 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int		ft_atoi(const char *str)
{
	int		ret;
	int		op;

	ret = 0;
	op = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
			|| *str == '\r' || *str == ' ')
		str++;
	if (!(*str == '+' || *str == '-') && !(ft_isdigit(*str)))
		return (0);
	else if (*str == '-' || *str == '+')
	{
		op = *str == '-' ? -1 : 1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		ret *= 10;
		ret += *str - '0';
		str++;
	}
	return (ret * op);
}
