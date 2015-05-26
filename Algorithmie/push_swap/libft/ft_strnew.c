/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 11:55:28 by wmai              #+#    #+#             */
/*   Updated: 2014/11/14 16:13:21 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

char		*ft_strnew(size_t size)
{
	void	*new;

	new = (void *)ft_memalloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	return ((char *)new);
}
