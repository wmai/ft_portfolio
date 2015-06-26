/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 11:00:45 by wmai              #+#    #+#             */
/*   Updated: 2015/06/19 15:06:17 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/fdf.h"

int				main(int argc, char *argv[])
{
	t_circle	*coor;
	t_env		*e;
	int			fd;
	char		*line;
	int			i;

	i = 0;
	if (argc == 2)
	{
		coor = ft_list_create_circular();
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			ft_throw_error("File can't be read.");
		while (get_next_line(fd, &line) == 1)
			fdf_parser(coor, line), i++;
		if (!(e = (t_env *)malloc(sizeof(t_env))))
			ft_throw_error("[t_env *all] Malloc failed.");
		fdf_init_env(e, coor);
	}
	else
		ft_throw_error("File's path expected.");
	return (0);
}
