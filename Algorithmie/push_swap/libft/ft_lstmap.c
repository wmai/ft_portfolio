/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 11:37:33 by wmai              #+#    #+#             */
/*   Updated: 2014/12/17 11:45:58 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list			*first;
	t_list			*tmp;

	if (!lst || !(*f) || !f)
		return (NULL);
	if ((first = ft_lstnew(NULL, 0)))
		return (NULL);
	first = lst;
	tmp = first;
	while (tmp)
	{
		(*f)(tmp);
		tmp = tmp->next;
	}
	return (first);
}
