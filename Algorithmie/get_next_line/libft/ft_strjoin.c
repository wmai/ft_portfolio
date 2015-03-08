/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 14:46:52 by wmai              #+#    #+#             */
/*   Updated: 2014/11/16 21:47:15 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*tmp_str;

	if (s1 && s2)
	{
		str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (str == NULL)
			return (NULL);
		tmp_str = str;
		while (*s1)
			*tmp_str++ = *s1++;
		while (*s2)
			*tmp_str++ = *s2++;
		*tmp_str = '\0';
		return (str);
	}
	return (NULL);
}
