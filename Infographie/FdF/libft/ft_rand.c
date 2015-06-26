/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 19:43:34 by wmai              #+#    #+#             */
/*   Updated: 2015/06/19 14:40:28 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int					ft_rand(unsigned int *seed)
{
	unsigned int	nxt;
	int				rslt;

	nxt = *seed;
	nxt *= 1103515245;
	nxt += 12345;
	rslt = (unsigned int)(nxt / 65536) % 2048;
	nxt *= 1103515245;
	nxt += 12345;
	rslt <<= 10;
	rslt ^= (unsigned int)(nxt / 65536) % 1024;
	nxt *= 1103515245;
	nxt += 12345;
	rslt <<= 10;
	rslt ^= (unsigned int)(nxt / 65536) % 1024;
	*seed = nxt;
	return (rslt);
}
