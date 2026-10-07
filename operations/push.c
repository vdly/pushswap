/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:40 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/07 22:54:00 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_pslist **stacka, t_pslist **stackb)
{
	//move the top of the stack b to stack a
	t_pslist	*temp;
	
	if (!stackb||!*stackb)
		return;
	temp = (*stackb);
	(*stackb) = temp -> next;
	if (*stackb)
		(*stackb) -> prev = NULL;
	temp -> prev = NULL;
	temp -> next = NULL;
	add_front(stacka,temp);
}

void	pb(t_pslist **stacka, t_pslist **stackb)
{
	//move the top of the stack a to stack b
	t_pslist	*temp;
	
	if (!stacka||!*stacka)
		return;
	temp = (*stacka);
	(*stacka) = temp -> next;
	if (*stacka)
		(*stacka) -> prev = NULL;
	temp -> prev = NULL;
	temp -> next = NULL;
	add_front(stackb,temp);
}


