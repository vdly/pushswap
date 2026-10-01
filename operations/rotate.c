/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:46 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/02 00:07:21 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ra(t_list **stacka)
{
	t_list	*temp;
	
	if (!stacka || !*stacka)
		return;
	temp = *stacka;
	*stacka = temp -> next;
	temp -> prev = NULL;
	temp -> next = NULL;
	add_back(stacka,temp);
}

void	rb(t_list **stackb)
{
	t_list	*temp;
	
	if (!stackb || !*stackb)
		return;
	temp = *stackb;
	*stackb = temp -> next;
	temp -> prev = NULL;
	temp -> next = NULL;
	add_back(stackb,temp);
}

void	rr(t_list **stacka, t_list **stackb)
{
	ra(stacka);
	rb(stackb);
}