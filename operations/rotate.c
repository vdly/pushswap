/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:07:46 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/25 22:17:56 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!stack || !*stack || !((*stack)->next))
		return ;
	first = *stack;
	last = lst_last(*stack);
	*stack = first->next;
	(*stack)->prev = NULL;
	first->next = NULL;
	first->prev = last;
	last->next = first;
}

void	ra(t_list **stacka)
{
	t_bench	*bench;

	bench = get_bench();
	rotate(stacka);
	if (bench != NULL && bench->active == 1)
	{
		bench->ra++;
		bench->total_ops++;
	}
	ft_printf("ra\n");
}

void	rb(t_list **stackb)
{
	t_bench	*bench;

	bench = get_bench();
	rotate(stackb);
	if (bench != NULL && bench->active == 1)
	{
		bench->rb++;
		bench->total_ops++;
	}
	ft_printf("rb\n");
}

void	rr(t_list **stacka, t_list **stackb)
{
	t_bench	*bench;

	bench = get_bench();
	rotate(stacka);
	rotate(stackb);
	if (bench != NULL && bench->active == 1)
	{
		bench->rr++;
		bench->total_ops++;
	}
	ft_printf("rr\n");
}

// int	main(int argc, char **argv)
// {
// 	t_list	*stack = NULL;

// 	parse(argc, argv, &stack);
// 	t_list	*temp = stack;
// 	while (temp)
// 	{
// 		printf("num: %d\n", temp->number, temp->index);
// 		temp = temp->next;
// 	}
// 	rotate(&stack);
// 	temp = stack;
// 	while (temp)
// 	{
// 		printf("num: %d\n", temp->number, temp->index);
// 		temp = temp->next;
// 	}
// 	lst_clear(&stack);
// 	return (0);
// }