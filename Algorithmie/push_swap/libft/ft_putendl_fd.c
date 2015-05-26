/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 08:48:51 by wmai              #+#    #+#             */
/*   Updated: 2014/11/13 11:22:53 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void				ft_putendl_fd(char const *s, int fd)
{
	register char	*tmp;
	size_t			i;

	tmp = (char *)s;
	i = 0;
	while (tmp[i])
		i++;
	tmp[i] = '\n';
	tmp[i++] = '\0';
	write(fd, s, i);
}
