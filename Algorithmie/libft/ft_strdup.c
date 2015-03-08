/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 22:12:09 by wmai              #+#    #+#             */
/*   Updated: 2014/11/12 01:39:48 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

char		*ft_strdup(const char *s1)
{
	char	*tmp;

	if ((tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return ((tmp = ft_strcpy(tmp, s1)));
	return (NULL);
}
