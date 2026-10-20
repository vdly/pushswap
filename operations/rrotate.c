/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:49 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/20 22:09:36 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **a)
{
	t_list	*first;
	t_list	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	last = lst_last(*a);
	last->prev->next = NULL;
	*a = last;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
}

void	rrb(t_list **b)
{
	t_list	*first;
	t_list	*last;
	
	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	last = lst_last(*b);
	last->prev->next = NULL;
	*b = last;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
}

void	rrotate(char *type, t_list **a, t_list **b)
{
	if (!ft_strcmp(type, "rra"))
	{
		rra(a);
		ft_printf("rra\n", 4);
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
		ft_printf("rrr\n");
	}
	else
		return ;
}
