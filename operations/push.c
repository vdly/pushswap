/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:40 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/02 00:07:29 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **stacka, t_list **stackb)
{
	//move the top of the stack b to stack a
	t_list	*temp;
	
	if (!*stackb||!stackb)
		return;
	temp = *stackb;
	temp -> prev = NULL;
	*stackb = temp -> next;
	add_front(stacka,temp);
}

void	pb(t_list **stacka, t_list **stackb)
{
	//move the top of the stack a to stack b
	t_list	*temp;
	
	if (!*stacka||!stacka)
		return;
	temp = *stacka;
	temp -> prev = NULL;
	(*stacka) = temp -> next;
	add_front(stackb,temp);
}


