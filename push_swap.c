/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:20:16 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/24 16:47:44 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	selection(char *flag, t_list **a, t_list **b)
{
	t_bench *bench;

	bench = get_bench();
	if (sorted(*a))
		return ;
	if (flag && !ft_strncmp(flag, "--simple", 9))
	{
		bench->strategy = 1;
		bench->adaptive = 0;
		simple(&(*a), &(*b));
	}
	else if (flag && !ft_strncmp(flag, "--medium", 9))
	{
		bench->strategy = 2;
		bench->adaptive = 0;
		medium(&(*a), &(*b));
	}
	else if (flag && !ft_strncmp(flag, "--complex", 9))
	{
		bench->strategy = 3;
		bench->adaptive = 0;
		radix_sort(&(*a), &(*b));
	}
	else
	{
		bench->adaptive = 1;
		adaptive(a, b);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_bench	*bench;
	char	*flag;

	stack_a = NULL;
	stack_b = NULL;
	bench = get_bench();
	flag = NULL;
	
	if (argc < 2)
		return (0);
	if (argv[1][0] == '-' && argv[1][1] == '-')
	{
		flag = argv[1];
		bench->active = 1;
		argv++;
		argc--;
	}
	if (argc < 2)
		return (0);
	parse(argc, argv, &stack_a);
	indexing(&stack_a);
	bench->disorder = disordermetric(&stack_a);
	// t_list *temp = stack_a;
	// while (temp)
	// {
	// 	ft_printf("num = %d, index = %d\n", temp->number, temp->index);
	// 	temp = temp->next;
	// }
	selection(flag, &stack_a, &stack_b);
	// temp = stack_a;
	// while (temp)
	// {
	// 	ft_printf("num = %d, index = %d\n", temp->number, temp->index);
	// 	temp = temp->next;
	// }
	print_benchmark(bench);
	lst_clear(&stack_a);
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	t_list	*stack_a;
// 	t_list	*stack_b;
// 	// t_list	*bench;

// 	stack_a = NULL;
// 	stack_b = NULL;
// 	if (argc < 2)
// 		ft_printf("Error\n");
// 	parse(argc, argv, &stack_a);
// 	indexing(&stack_a);
// 	// t_list *temp = stack_a;
// 	// while (temp)
// 	// {
// 	// 	ft_printf("num = %d, index = %d\n", temp->number, temp->index);
// 	// 	temp = temp->next;
// 	// }
// 	selection(argv, &stack_a, &stack_b);
// 	// temp = stack_a;
// 	// while (temp)
// 	// {
// 	// 	ft_printf("num = %d, index = %d\n", temp->number, temp->index);
// 	// 	temp = temp->next;
// 	// }
// 	lst_clear(&stack_a);
// }