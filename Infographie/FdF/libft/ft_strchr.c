/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 04:18:06 by wmai              #+#    #+#             */
/*   Updated: 2014/11/07 06:11:45 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

char		*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s && *s++)
		continue ;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
