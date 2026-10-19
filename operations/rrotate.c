/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:49 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/19 21:02:39 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_pslist	*lst_last(t_pslist *lst);

void	rra(t_pslist **a)
{
	t_pslist	*first;
	t_pslist	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	last = lst_last(*a);
	last->prev->next = NULL;
	*a = last;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
}

void	rrb(t_pslist **b)
{
	t_pslist	*first;
	t_pslist	*last;
	
	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	last = lst_last(*b);
	last->prev->next = NULL;
	*b = last;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
}
