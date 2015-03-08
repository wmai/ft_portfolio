/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 10:32:55 by wmai              #+#    #+#             */
/*   Updated: 2014/12/15 10:32:57 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

char			*ft_strrev(char *str)
{
	int			len;
	size_t		i;
	char		*tmp;

	i = 0;
	len = ft_strlen(str);
	len = len - 2;
	tmp = malloc(sizeof(char) * len);
	while (len >= 0)
		tmp[i++] = str[len--];
	tmp[i] = '\0';
	return (tmp);
}
