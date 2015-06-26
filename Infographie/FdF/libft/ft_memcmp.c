/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 01:22:53 by wmai              #+#    #+#             */
/*   Updated: 2014/11/14 12:59:33 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*tmp_s1;
	const unsigned char		*tmp_s2;

	tmp_s1 = s1;
	tmp_s2 = s2;
	while (n)
	{
		n--;
		if (*tmp_s1 != *tmp_s2)
			return (*tmp_s1 - *tmp_s2);
		s1++;
		s2++;
	}
	return (0);
}
