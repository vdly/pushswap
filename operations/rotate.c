/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:46 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/20 00:58:37 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	rotate(t_pslist **stack)
{
	t_pslist	*temp;
	if (!stack || !*stack || !((*stack) -> next))
		return ;
	temp = (*stack);
	(*stack) = temp -> next;
	(*stack) -> prev = NULL;
	temp -> prev = NULL;
	temp -> next = NULL;
	add_back(stack,temp);
}
void	ra(t_pslist **stacka)
{
	t_bench		*bench;

	bench = get_bench();
	rotate(stacka);
	if (bench != NULL && bench->active == 1)//main
	{
		bench->ra++;
		bench->total_ops++;
	}
	ft_printf("ra\n");
}

void	rb(t_pslist **stackb)
{
	t_bench		*bench;

	bench = get_bench();
	rotate(stackb);
	if (bench != NULL && bench->active == 1)//main
	{
		bench->rb++;
		bench->total_ops++;
	}
	ft_printf("rb\n");
}

void	rr(t_pslist **stacka, t_pslist **stackb)
{
	t_bench		*bench;

	bench = get_bench();
	rotate(stacka);
	rotate(stackb);
	if (bench != NULL && bench->active == 1)//main
	{
		bench->rr++;
		bench->total_ops++;
	}
	ft_printf("rr\n");
}