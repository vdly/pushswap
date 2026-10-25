/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:20:16 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/26 06:02:07 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(char **argv, t_list **a, t_list **b, t_bench *bench)
{
	if (!ft_strcmp(argv[1], "--simple"))
	{
		bench->strategy = 1;
		bench->adaptive = 0;
		simple(a, b, bench);
	}
	else if (!ft_strcmp(argv[1], "--medium"))
	{
		bench->strategy = 2;
		bench->adaptive = 0;
		medium(a, b, bench);
	}
	else if (!ft_strcmp(argv[1], "--complex"))
	{
		bench->strategy = 3;
		bench->adaptive = 0;
		radix_sort(a, b, bench);
	}
	else if (!ft_strcmp(argv[1], "--bench"))
	{
		bench->strategy = 4;
		bench->adaptive = 0;
		adaptive(a, b, bench);
		print_benchmark(bench);
	}
	else
	{
		bench->adaptive = 1;
		adaptive(a, b, bench);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_bench	bench;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	parse(argc, argv, &stack_a);
	if (argv[1][0] == '-' && argv[1][1] == '-')
		bench.active = 1;
	indexing(&stack_a);
	bench.disorder = disordermetric(&stack_a);
	if (!sorted(stack_a))
		sort(argv, &stack_a, &stack_b, &bench);
	lst_clear(&stack_a);
	return (0);
}
