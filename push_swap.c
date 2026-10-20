/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:20:16 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/20 23:25:09 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection(char **argv, t_list **a, t_list **b)
{
	if (!sorted(*a))
	{
		if (!ft_strcmp(argv[1], "--simple"))
			simple(&(*a), &(*b));
		else if (!ft_strcmp(argv[1], "--medium"))
			medium(&(*a), &(*b));
		else if (!ft_strcmp(argv[1], "--complex"))
			radix_sort(&(*a), &(*b));
		else if (!ft_strcmp(argv[1], "--adaptive"))
		{
			return ;
		}
		else if (!ft_strcmp(argv[1], "--bench"))
		{
			return ;
		}
		else
		{
			return ;
		}
	}
	else
		return ;
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	// t_list	*bench;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		ft_printf("Error\n");
	parse(argc, argv, &stack_a);
	indexing(&stack_a);
	t_list *temp = stack_a;
	while (temp)
	{
		ft_printf("num = %d, index = %d\n", temp->number, temp->index);
		temp = temp->next;
	}
	selection(argv, &stack_a, &stack_b);
	temp = stack_a;
	while (temp)
	{
		ft_printf("num = %d, index = %d\n", temp->number, temp->index);
		temp = temp->next;
	}
	lst_clear(&stack_a);
}
