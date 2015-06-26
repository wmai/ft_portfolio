/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_create_circular.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 20:46:09 by wmai              #+#    #+#             */
/*   Updated: 2015/05/27 16:03:16 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

t_circle		*ft_list_create_circular(void)
{
	t_circle	*list;

	if (!(list = (t_circle *)malloc(sizeof(t_circle))))
		ft_throw_error("[ft_list_create_circular] Malloc failed.");
	list->origin = NULL;
	list->length = 0;
	list->put = &ft_list_put_circular;
	return (list);
}
