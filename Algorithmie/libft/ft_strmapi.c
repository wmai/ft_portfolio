/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 21:44:04 by wmai              #+#    #+#             */
/*   Updated: 2014/11/16 22:19:20 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	int			i;

	i = 0;
	if (s && f)
	{
		str = ft_strnew(ft_strlen(s));
		while (s[i] != '\0')
		{
			str[i] = (*f)(i, s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
