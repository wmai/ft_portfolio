/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:47:55 by wmai              #+#    #+#             */
/*   Updated: 2014/11/16 17:08:39 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int			count_first_space(char const *s)
{
	int		i;

	i = 0;
	while ((s[i]) && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	return (i);
}

int			count_last_space(char const *s, size_t len)
{
	int		i;

	i = 0;
	len--;
	while ((len > 0) && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
	{
		i++;
		len--;
	}
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*trim;
	int		count_f;
	int		count_l;
	size_t	len;

	if (*s)
	{
		len = ft_strlen(s);
		count_f = count_first_space(s);
		count_l = count_last_space(s, len);
		trim = NULL;
		if ((int)(len - count_f - count_l) <= 0)
			return (NULL);
		if (!(trim = ft_strsub(s, count_f, (size_t)(len - count_f - count_l))))
			return (NULL);
		trim[len - count_f - count_l] = '\0';
		return (trim);
	}
	return (NULL);
}
