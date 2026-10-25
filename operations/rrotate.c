/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:49 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/25 21:58:28 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = lst_last(*stack);
	last->prev->next = NULL;
	*stack = last;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
}

void	rra(t_list **a)
{
	t_bench	*bench;

	rrotate(a);
	bench = get_bench();
	if (bench != NULL && bench->active == 1)
	{
		bench->rra++;
		bench->total_ops++;
	}
	ft_printf("rra\n");
}

void	rrb(t_list **b)
{
	t_bench	*bench;

	rrotate(b);
	bench = get_bench();
	if (bench != NULL && bench->active == 1)
	{
		bench->rrb++;
		bench->total_ops++;
	}
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	t_bench	*bench;

	rrotate(a);
	rrotate(b);
	bench = get_bench();
	if (bench != NULL && bench->active == 1)
	{
		bench->rrr++;
		bench->total_ops++;
	}
	ft_printf("rrr\n");
}
