/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 08:48:04 by wmai              #+#    #+#             */
/*   Updated: 2014/11/13 11:21:52 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void						ft_putendl(char const *s)
{
	register char		*tmp;
	size_t				i;

	i = 0;
	tmp = (char *)s;
	while (tmp[i])
		i++;
	tmp[i] = '\n';
	tmp[i++] = '\0';
	write(1, tmp, i);
}
