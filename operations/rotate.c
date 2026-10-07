/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:46 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/07 22:54:08 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}

void	rb(t_pslist **stackb)
{
	t_pslist	*temp;
	
	if (!stackb || !*stackb || !((*stacka) -> next))
		return;
	temp = *stackb;
	*stackb = temp -> next;
	if (*stackb)
		(*stackb) -> prev = NULL;
	temp -> prev = NULL;
	temp -> next = NULL;
	add_back(stackb,temp);
}

void	rr(t_pslist **stacka, t_pslist **stackb)
{
	ra(stacka);
	rb(stackb);
}