/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 22:09:51 by wmai              #+#    #+#             */
/*   Updated: 2014/11/08 15:32:40 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	tmp[len];

	ft_strncpy(tmp, (char *)src, len);
	ft_strncpy((char *)dst, tmp, len);
	return (dst);
}
