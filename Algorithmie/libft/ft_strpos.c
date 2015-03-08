/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 10:32:29 by wmai              #+#    #+#             */
/*   Updated: 2014/12/15 10:32:32 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int				ft_strpos(char *str, char c)
{
	size_t		i;

	i = 0;
	if (!str || !c || !(ft_isprint(c)))
		return (0);
	while (str[i] && str[i] != c)
		i++;
	if (i >= ft_strlen(str))
		return (0);
	return (++i);
}
