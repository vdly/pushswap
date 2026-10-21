/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:49 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/21 22:04:00 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **a)
{
	t_list	*first;
	t_list	*last;
	t_bench	*bench;

	bench = get_bench();
	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	last = lst_last(*a);
	last->prev->next = NULL;
	*a = last;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
	if (bench != NULL && bench->active == 1)
	{
		bench->rra++;
		bench->total_ops++;
	}
}

void	rrb(t_list **b)
{
	t_list	*first;
	t_list	*last;
	t_bench	*bench;

	bench = get_bench();
	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	last = lst_last(*b);
	last->prev->next = NULL;
	*b = last;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
	if (bench != NULL && bench->active == 1)
	{
		bench->rrb++;
		bench->total_ops++;
	}
}

void	rrotate(char *type, t_list **a, t_list **b)
{
	t_bench	*bench;

	bench = get_bench();
	if (!ft_strcmp(type, "rra"))
	{
		rra(a);
		ft_printf("rra\n");
	}
	else if (!ft_strcmp(type, "rrb"))
	{
		rrb(b);
		ft_printf("rrb\n");
	}
	else if (!ft_strcmp(type, "rrr"))
	{
		rra(a);
		rrb(b);
		if (bench != NULL && bench->active == 1)
		{
			bench->rra--;
			bench->rrb--;
			bench->total_ops -= 2;
			bench->rrr++;
			bench->total_ops++;
		}
		ft_printf("rrr\n");
	}
	else
		return ;
}
