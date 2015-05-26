/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 09:32:19 by wmai              #+#    #+#             */
/*   Updated: 2014/11/16 22:37:24 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void		*ft_memalloc(size_t size)
{
	void	*new;

	if ((new = malloc(size)) == NULL)
		return (NULL);
	ft_bzero(new, size);
	return (new);
}
