/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:46 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/19 21:14:48 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ra(t_pslist **stacka)
{
	t_pslist	*temp;
	
	if (!stacka || !*stacka || !((*stacka) -> next))
		return ;
	temp = (*stacka);
	(*stacka) = temp -> next;
	if (*stacka)
		(*stacka) -> prev = NULL;
	temp -> prev = NULL;
	temp -> next = NULL;
	add_back(stacka,temp);
	printf("ra\n");
}

void	rb(t_pslist **stackb)
{
	t_pslist	*temp;
	
	if (!stackb || !*stackb || !((*stackb) -> next))
		return;
	temp = *stackb;
	*stackb = temp -> next;
	if (*stackb)
		(*stackb) -> prev = NULL;
	temp -> prev = NULL;
	temp -> next = NULL;
	add_back(stackb,temp);
	printf("rb\n");
}

void	rr(t_pslist **stacka, t_pslist **stackb)
{
	ra(stacka);
	rb(stackb);
}