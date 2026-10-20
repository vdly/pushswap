/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 00:32:26 by ytee              #+#    #+#             */
/*   Updated: 2026/10/20 00:32:26 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bench *get_bench(void)
{
	static t_bench bench;
	return (&bench);
}

void	print_benchmark(t_bench *bench)
{
	if (bench == NULL || bench->active != 1)
		return ;

	bench->total_ops = bench->sa + bench->sb + bench->ss + bench->pa + 
					bench->pb + bench->ra + bench->rb + bench->rr + 
					bench->rra + bench->rrb + bench->rrr;
	ft_putstr("[bench] disorder: ", 2);
	ft_putstr("bench->disorder", 2);
	ft_printf("[bench] strategy: ");
	if (bench->strategy == 0)
		ft_printf("Adaptive / Auto\n");
	if (bench->strategy == 1)
		ft_printf("Simple O(n²)\n");
	if (bench->strategy == 2)
		ft_printf("Medium O(n√n)\n");
	if (bench->strategy == 3)
		ft_printf("Complex O(n log n)\n");
	ft_printf("[bench] total_ops: %d\n", bench->total_ops);
	ft_printf("[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n",
			bench->sa, bench->sb, bench->ss, bench->pa, bench->pb);
	ft_printf("[bench] ra: %d rb: %d rr: %d rra: %d, rrb: %d, rrr: %d\n",
			bench->ra, bench->rb, bench->rr, bench->rra, bench->rrb, bench->rrr);
}

#include "push_swap.h"
#include <stdio.h>

// int main(void)
// {
//     t_bench *bench;

//     // 1. Get the benchmark instance
//     bench = get_bench();

//     // 2. Activate the benchmark and set mock data
//     bench->active = 1;
//     bench->strategy = 2;       // Test Medium O(n√n)
//     bench->disorder = 4250;    // Represents 42.50% disorder (using our integer scale)

//     // 3. Simulate some operations being performed
//     bench->pa = 5;
//     bench->pb = 5;
//     bench->ra = 2;
//     bench->rb = 1;
//     bench->rra = 0;
//     bench->rrb = 0;
//     bench->rrr = 0;
//     bench->sa = 0;
//     bench->sb = 0;
//     bench->ss = 0;
//     bench->rr = 0;

//     // 4. Print the benchmark report
//     print_benchmark(bench);

//     return (0);
// }