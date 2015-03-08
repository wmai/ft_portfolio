/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:37:22 by wmai              #+#    #+#             */
/*   Updated: 2014/11/06 23:00:14 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dst;

	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	while (n--)
		*tmp_dst++ = *tmp_src++;
	return (dst);
}
