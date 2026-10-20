/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 23:49:19 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/20 20:04:10 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexing(t_list **stack)
{
	t_list	*current;
	t_list	*min_node;
	int		index;
	int		min_num;

	index = 0;
	while (index < lst_size(*stack))
	{
		min_num = INT_MAX;
		current = *stack;
		min_node = NULL;
		while (current)
		{
			if (current->index == -1 && current->number < min_num)
			{
				min_num = current->number;
				min_node = current;
			}
			current = current->next;
		}
		min_node->index = index;
		index++;
	}
}

// int	main(int argc, char **argv)
// {
// 	t_list	*stack_a;

// 	stack_a = NULL;
// 	if (argc < 2)
// 		return (0);
// 	parse(argc, argv, &stack_a);
// 	indexing(stack_a);
// 	t_list *temp = stack_a;
// 	while (temp)
// 	{
// 		ft_printf("%d && %d\n", temp->number, temp->index);
// 		temp = temp->next;
// 	}
// 	lst_clear(&stack_a);
// 	return (0);
// }
