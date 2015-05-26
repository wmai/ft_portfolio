/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmai <wmai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 11:07:17 by wmai              #+#    #+#             */
/*   Updated: 2015/05/26 12:05:56 by wmai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include "../../libft/inc/libft.h"
# include "../../liblist/inc/liblist.h"

/*
****************** DEFINES ****************************************************
*/
# define SA		0
# define SB		1
# define SS		2
# define PA		3
# define PB		4
# define RA		5
# define RB		6
# define RR		7
# define RRA	8
# define RRB	9
# define RRR	10

/*
****************** STRUCTS ****************************************************
*/
typedef struct	s_opt
{
	char		*option;
}				t_opt;

/*
****************** GENERAL ****************************************************
*/
void			push(t_circle *list_a, t_circle *list_b, int op, int space);
void			swap(t_circle *list_a, t_circle *list_b, int op, int space);
void			rotate(t_circle *list_a, t_circle *list_b, int op, int space);
void			select_algo(t_circle *list_a, t_circle *list_b);
void			push_swap_small(t_circle *list_a, t_circle *list_b);
void			push_swap_medium(t_circle *list_a, t_circle *list_b);
void			push_swap_large(t_circle *list_a, t_circle *list_b);
void			push_swap_medium(t_circle *list_a, t_circle *list_b);
void			split(t_circle *list_a, t_circle *list_b);
void			bubble_sort(t_circle *list_a, t_circle *list_b);
void			bubble_sorted(t_circle *list_a, t_circle *list_b, int flag);
void			bubble_sort_swap(t_circle *list_a, t_circle *list_b, int *cnt);
void			bubble_sort_rotate(t_circle *list_a, t_circle *list_b, int *c);
void			push_all_a(t_circle *list_a, t_circle *list_b, int space);
void			push_all_b(t_circle *list_a, t_circle *list_b, int space);
void			rotate_until_index_a(t_circle *list_a, t_circle *list_b, int x);
void			rotate_until_index_b(t_circle *list_a, t_circle *list_b, int x);
int				get_min(t_circle *list);
int				get_max(t_circle *list);
int				is_sorted(t_circle *list_a, t_circle *list_b);
int				is_sorted_circular(t_circle *list);
int				is_sorted_unitary(t_circle *list);
void			init_piles(char *argv[], int argc);
int				*split_arg(char *argv[], int argc);
void			checks(char *argv[], int argc);
void			putop(int op);

#endif
