/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:51:49 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/14 21:54:30 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **a)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = *a;
	node2 = (*a)->next;
	node3 = node2->next;
	if (!a || !*a || !(*a)->next)
		return ;
	*a = node2;
	node2->prev = NULL;
	node2->next = node1;
	node1->prev = node2;
	node1->next = node3;
	if (node3)
		node3->prev = node1;
}

void	sa(t_list **b)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = *b;
	node2 = (*b)->next;
	node3 = node2->next;
	if (!b || !*b || !(*b)->next)
		return ;
	*b = node2;
	node2->prev = NULL;
	node2->next = node1;
	node1->prev = node2;
	node1->next = node3;
	if (node3)
		node3->prev = node1;
}

void	swap(char *type, t_list **a, t_list **b)
{
	if (!ft_strcmp(type, "sa"))
	{
		sa(a);
		ft_printf("sa\n");
	}
	else if (!ft_strcmp(type, "sb"))
	{
		sb(b);
		ft_printf("sb\n");
	}
	else if (!ft_strcmp(type, "ss"))
	{
		sa(a);
		sb(b);
		ft_printf("ss\n");
	}
	else
		return ;
}