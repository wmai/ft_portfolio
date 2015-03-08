/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 11:09:14 by wmai              #+#    #+#             */
/*   Updated: 2014/12/17 11:22:19 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !*alst || !del)
		return ;
	if (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		ft_memdel((void	**)alst);
	}
}