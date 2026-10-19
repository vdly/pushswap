/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 22:26:15 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/19 21:27:59 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct p_list
{
	int				number;
	int				rank;
	struct p_list	*next;
	struct p_list	*prev;
}					t_pslist;

void		simple(t_pslist **stacka, t_pslist **stackb);
void		pa(t_pslist **stacka, t_pslist **stackb);
void		pb(t_pslist **stacka, t_pslist **stackb);
void		ra(t_pslist **stacka);
void		rb(t_pslist **stackb);
void		rr(t_pslist **stacka, t_pslist **stackb);
void		add_front(t_pslist **lst, t_pslist *new);
void		add_back(t_pslist **lst, t_pslist *new);
void		medium(t_pslist **stacka, t_pslist **stackb);
void		rrb(t_pslist **b);
void		ft_lstadd_back(t_pslist **lst, t_pslist *new);
t_pslist	*ft_lstnew(int number);


# endif