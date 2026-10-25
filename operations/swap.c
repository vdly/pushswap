/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:51:49 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/26 04:08:11 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **a, t_bench *bench)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	
	if (!a || !*a || !(*a)->next)
		return ;
	node1 = *a;
	node2 = (*a)->next;
	node3 = node2->next;
	*a = node2;
	node2->prev = NULL;
	node2->next = node1;
	node1->prev = node2;
	node1->next = node3;
	if (node3)
		node3->prev = node1;
	if (bench != NULL && bench->active == 1)
	{
		bench->sa++;
		bench->total_ops++;
	}
}

void	sb(t_list **b, t_bench *bench)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	
	if (!b || !*b || !(*b)->next)
		return ;
	node1 = *b;
	node2 = (*b)->next;
	node3 = node2->next;
	*b = node2;
	node2->prev = NULL;
	node2->next = node1;
	node1->prev = node2;
	node1->next = node3;
	if (node3)
		node3->prev = node1;
	if (bench != NULL && bench->active == 1)
	{
		bench->sb++;
		bench->total_ops++;
	}
}

void	bench_ss(t_bench *bench)
{
	if (bench && bench->active == 1)
	{
		bench->sa--;
		bench->sb--;
		bench->total_ops -= 2;
		bench->ss++;
		bench->total_ops++;
	}
}

void	ss(char *type, t_list **a, t_list **b, t_bench *bench)
{
	if (!ft_strncmp(type, "sa", 3))
	{
		sa(a, bench);
		ft_printf("sa\n");
	}
	else if (!ft_strncmp(type, "sb", 3))
	{
		sb(b, bench);
		ft_printf("sb\n");
	}
	else if (!ft_strncmp(type, "ss", 3))
	{
		sa(a, bench);
		sb(b, bench);
		bench_ss(bench);
		ft_printf("ss\n");
	}
	else
		return ;
}
