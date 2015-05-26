/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putop.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 06:43:20 by wmai              #+#    #+#             */
/*   Updated: 2015/05/06 01:05:49 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void			putop(int op)
{
	if (op == SA)
		write(1, "sa", 2);
	else if (op == SB)
		write(1, "sb", 2);
	else if (op == SS)
		write(1, "ss", 2);
	else if (op == PA)
		write(1, "pa", 2);
	else if (op == PB)
		write(1, "pb", 2);
	else if (op == RA)
		write(1, "ra", 2);
	else if (op == RB)
		write(1, "rb", 2);
	else if (op == RR)
		write(1, "rr", 2);
	else if (op == RRA)
		write(1, "rra", 3);
	else if (op == RRB)
		write(1, "rrb", 3);
	else if (op == RRR)
		write(1, "rrr", 3);
	else
		throw_error("[putop] Wrong operation asked.");
}
