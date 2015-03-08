/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 21:29:24 by wmai              #+#    #+#             */
/*   Updated: 2014/11/16 21:32:02 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		len;
	int		counter;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen (s);
		counter = 0;
		while (counter < len)
		{
			(*f)(counter, s);
			s++;
			counter++;
		}
	}
}
