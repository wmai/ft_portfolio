/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_create_circular.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 20:46:09 by wmai              #+#    #+#             */
/*   Updated: 2015/04/18 14:29:04 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/liblist.h"

t_circle		*list_create_circular(void)
{
	t_circle	*list;

	if (!(list = (t_circle *)malloc(sizeof(t_circle))))
		throw_error("[list_create_circular] Malloc failed.");
	list->origin = NULL;
	list->length = 0;
	list->put = &list_put_circular;
	return (list);
}
