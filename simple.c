/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 23:03:15 by ytee              #+#    #+#             */
/*   Updated: 2026/10/07 23:03:15 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	simple(t_pslist **stacka, t_pslist **stackb)
{
	t_pslist	*current;
	t_pslist	*smallest;

	while (*stacka != NULL)
	{
		current = *stacka;
		smallest = *stacka;
		while (current != NULL)
		{
			if ((current->number) < (smallest->number))
				smallest = current; 
			current = current->next;
		}
		while (*stacka != smallest)
		{
			ra(stacka);
		}
		pb(stacka, stackb);
	}
	while (*stackb != NULL)
	{
		pa(stacka, stackb);
	}
}

/*
int main(void)
{
	t_pslist *stack_a;
	t_pslist *stack_b;
	t_pslist *curr;

	stack_a = NULL;
	stack_b = NULL;
	stack_a = lst_new(4);
	add_back(&stack_a, lst_new(2));
	add_back(&stack_a, lst_new(1));
	add_back(&stack_a, lst_new(3));
	printf("--- Before Sorting (Stack A) ---\n");
	curr = stack_a;
	while (curr)
	{
		printf("%d -> ", curr->number);
		curr = curr->next;
	}
	printf("NULL\n\n");
	printf("--- Operations Trace ---\n");
	simple(&stack_a, &stack_b);
	printf("\n--- After Sorting (Stack A) ---\n");
	curr = stack_a;
	while (curr)
	{
		printf("%d -> ", curr->number);
		curr = curr->next;
	}
	printf("NULL\n");
	return (0);
}*/