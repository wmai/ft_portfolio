/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 09:41:09 by wmai              #+#    #+#             */
/*   Updated: 2014/11/16 22:12:50 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void			split_free(char **array, size_t i)
{
	size_t		t;

	t = 0;
	while (t < i)
	{
		free(array[t]);
		t++;
	}
	free(array);
}

static size_t	split_count_word(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (*s)
	{
		if ((*s == c && *(s + 1) != c && *(s + 1)) || (i == 0 && *s != c))
			i++;
		s++;
	}
	return (i);
}

size_t			split_count_char(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (*s != c && *s)
	{
		s++;
		i++;
	}
	return (i);
}

char			**split_splitter(char const *s, char c, char **array)
{
	size_t		y;

	y = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			array[y] = ft_strsub(s, 0, split_count_char(s, c));
			if (!array[y])
			{
				split_free(array, y);
				return (NULL);
			}
			s += split_count_char(s, c);
			y++;
		}
	}
	array[y][0] = '\0';
	return (array);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**array;
	size_t		i;

	array = NULL;
	i = 0;
	if (s && c)
	{
		i = split_count_word(s, c);
		array = (char **)malloc(sizeof(char *) * i + 1);
		if (array)
			return (split_splitter(s, c, array));
	}
	return (NULL);
}
