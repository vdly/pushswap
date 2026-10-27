/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:20:16 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/27 21:05:10 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	strategy(int argc, char **argv, t_bench *bench)
{
	int	i;

	i = 1;
	while (i < argc && argv[i][0] == '-' && argv[i][1] == '-')
	{
		if (ft_strcmp(argv[i], "--simple") == 0)
			bench->strategy = 1;
		else if (ft_strcmp(argv[i], "--medium") == 0)
			bench->strategy = 2;
		else if (ft_strcmp(argv[i], "--complex") == 0)
			bench->strategy = 3;
		else if (ft_strcmp(argv[i], "--adaptive") == 0)
		{
			bench->strategy = 4;
			bench->adaptive = 1;
		}
		else if (ft_strcmp(argv[i], "--bench") == 0)
			bench->active = 1;
		i++;
	}
}

void	sort(t_list **a, t_list **b)
{
	t_bench	*bench;

	bench = get_bench();
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
	if (bench->active == 1)
		print_benchmark(bench);
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
	strategy(argc, argv, bench);
	parse(argc, argv, &stack_a);
	indexing(&stack_a);
	bench->disorder = disordermetric(&stack_a);
	if (!sorted(stack_a))
		sort(&stack_a, &stack_b);
	else if (sorted(stack_a) && bench->active == 1)
		print_benchmark (bench);
	lst_clear(&stack_a);
	return (0);
}
