/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 12:24:34 by wmai              #+#    #+#             */
/*   Updated: 2014/11/08 23:37:11 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (s2[len])
		len++;
	if (len == 0)
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		while (s2[j] == s1[i + j] && (i + j) < n)
		{
			if (j == len - 1)
				return ((char *)s1 + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
