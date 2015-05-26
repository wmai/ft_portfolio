/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 22:05:30 by wmai              #+#    #+#             */
/*   Updated: 2014/11/11 22:53:07 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*tmp_src;
	char	*tmp_dst;

	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	if (!tmp_src || !tmp_dst)
		return (NULL);
	while (n--)
	{
		if ((*tmp_dst++ = *tmp_src++) == (unsigned char)c)
			return (tmp_dst);
	}
	return (NULL);
}
