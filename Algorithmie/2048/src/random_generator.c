/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_generator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 20:52:48 by wmai              #+#    #+#             */
/*   Updated: 2015/03/08 01:47:34 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/wong_kar_wai.h"

int			random_generator(void)
{
	return ((rand() % 10) > 0 ? 2 : 4);
}
