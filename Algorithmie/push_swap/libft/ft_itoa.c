/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 15:12:13 by wmai              #+#    #+#             */
/*   Updated: 2014/11/16 17:07:22 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

char			*create_str(int n)
{
	char		*str;
	int			len;

	len = 0;
	str = NULL;
	if (n < 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (*str++)
		continue ;
	*str = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	char		*ret;

	if (!(ret = create_str(n)))
		return (NULL);
	if (n >= 0)
	{
		if (n == 0)
			*--ret = '0';
		while (n != 0)
		{
			*--ret = '0' + (n % 10);
			n /= 10;
		}
		return (ret);
	}
	else
	{
		while (n != 0)
		{
			*--ret = '0' - (n % 10);
			n /= 10;
		}
		*--ret = '-';
	}
	return (ret);
}
