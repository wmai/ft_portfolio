/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 10:31:53 by wmai              #+#    #+#             */
/*   Updated: 2014/12/15 10:32:02 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void		*ft_realloc(void *ptr, size_t size)
{
	char	*bak;

	if (!(bak = (char *)malloc(sizeof(bak) * ft_strlen(ptr))))
		return (NULL);
	ft_memcpy(bak, ptr, ft_strlen(ptr));
	if (!(ptr = (char *)malloc(sizeof(char *) * size)))
		return (NULL);
	ft_memcpy(ptr, bak, ft_strlen(bak));
	return (ptr);
}
