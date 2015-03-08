/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 11:13:54 by wmai              #+#    #+#             */
/*   Updated: 2014/12/17 11:22:29 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*tmp_list_1;
	t_list		*tmp_list_2;

	if (!alst || !*alst || !del)
		return ;
	tmp_list_2 = *alst;
	while (tmp_list_2)
	{
		tmp_list_1 = tmp_list_2;
		tmp_list_2 = tmp_list_2->next;
		del(tmp_list_1->content, tmp_list_1->content_size);
		free(tmp_list_1);
		tmp_list_1 = NULL;
	}
	*alst = NULL;
	alst = NULL;
}