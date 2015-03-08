/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 10:31:18 by wmai              #+#    #+#             */
/*   Updated: 2014/12/15 10:31:28 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE	8

# include <unistd.h>
# include <stdlib.h>
# include "libft/includes/libft.h"

int					get_next_line(int const fd, char **line);

#endif
