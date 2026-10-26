/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:20:16 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/27 05:07:08 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	strategy(char **argv, t_bench *bench)
{
	if (!ft_strcmp(argv[1], "--simple"))
		bench->strategy = 1;
	else if (!ft_strcmp(argv[1], "--medium"))
		bench->strategy = 2;
	else if (!ft_strcmp(argv[1], "--complex"))
		bench->strategy = 3;
	else if (!ft_strcmp(argv[1], "--bench"))
	{
		bench->strategy = 4;
		bench->adaptive = 1;
	}
	else
		bench->adaptive = 1;
}

void	sort(char **argv, t_list **a, t_list **b)
{
	t_bench	*bench;

	bench = get_bench();
	strategy(argv, bench);
	if (bench->strategy == 1)
		simple(a, b);
	else if (bench->strategy == 2)
		medium(a, b);
	else if (bench->strategy == 3)
		radix_sort(a, b);
	else if (bench->strategy == 4)
	{
		adaptive(a, b);
		print_benchmark(bench);
	}
	else
		adaptive(a, b);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_bench	*bench;

	stack_a = NULL;
	stack_b = NULL;
	bench = get_bench();
	ft_bzero(bench, sizeof(t_bench));
	if (argc < 2)
		return (0);
	parse(argc, argv, &stack_a);
	if (argv[1][0] == '-' && argv[1][1] == '-')
		bench->active = 1;
	indexing(&stack_a);
	bench->disorder = disordermetric(&stack_a);
	if (!sorted(stack_a))
		sort(argv, &stack_a, &stack_b);
	lst_clear(&stack_a);
	return (0);
}
