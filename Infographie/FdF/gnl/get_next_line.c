/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 10:30:58 by wmai              #+#    #+#             */
/*   Updated: 2015/05/26 11:31:07 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/get_next_line.h"

char				*ft_line(char *tmp_str)
{
	int				i;
	char			*ret_line;

	i = 0;
	while (tmp_str[i] != '\n' && tmp_str[i] != '\0' && ++i)
		continue ;
	ret_line = ft_strsub(tmp_str, 0, i);
	ret_line[i] = '\0';
	return (ret_line);
}

int					ft_start(char *tmp_str)
{
	int				i;

	i = 0;
	while (tmp_str[i] != '\n' && tmp_str[i] != '\0' && ++i)
		continue ;
	return (i);
}

int					get_next_line(int const fd, char **line)
{
	static char		*tmp = "";
	char			*buffer;
	long			result;
	long			lenght;

	result = 0;
	if (fd < 0 || !line || !(buffer = ft_strnew(BUFF_SIZE + 1)))
		return (-1);
	while (!(ft_strchr(tmp, '\n')) && (result = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[result] = '\0';
		tmp = ft_strjoin(tmp, buffer);
	}
	*line = ft_line(tmp);
	lenght = ft_strlen(tmp);
	tmp = ft_strsub(tmp, ft_start(tmp) + 1, (lenght - ft_start(tmp)) + 1);
	free(buffer);
	if (result < 0)
		return (-1);
	return ((lenght == 0 && result == 0) ? 0 : 1);
}
