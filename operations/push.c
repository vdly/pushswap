/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:40 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/22 17:38:38 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **stacka, t_list **stackb)
{
	t_list	*temp;
	t_bench	*bench;

	bench = get_bench();
	if (!stackb ||!*stackb)
		return ;
	temp = (*stackb);
	(*stackb) = temp -> next;
	if (*stackb)
		(*stackb)->prev = NULL;
	temp->prev = NULL;
	temp->next = NULL;
	add_front(stacka, temp);
	if (bench != NULL && bench->active == 1)
	{
		bench->pa++;
		bench->total_ops++;
	}
	ft_printf("pa\n");
}

void	pb(t_list **stacka, t_list **stackb)
{
	t_list	*temp;
	t_bench	*bench;

	bench = get_bench();
	if (!stacka ||!*stacka)
		return ;
	temp = (*stacka);
	(*stacka) = temp->next;
	if (*stacka)
		(*stacka)->prev = NULL;
	temp->prev = NULL;
	temp->next = NULL;
	add_front(stackb, temp);
	if (bench != NULL && bench->active == 1)
	{
		bench->pb++;
		bench->total_ops++;
	}
	ft_printf("pb\n");
}
