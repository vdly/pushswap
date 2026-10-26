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

#include "../push_swap.h"

t_bench	*get_bench(void)
{
	static t_bench	bench;

	return (&bench);
}

static void	print_totalops(t_bench *bench)
{
	ft_putstr_fd("\n", 2);
	ft_putstr_fd("[bench] sa: ", 2);
	ft_putnbr_fd(bench->sa, 2);
	ft_putstr_fd("  sb: ", 2);
	ft_putnbr_fd(bench->sb, 2);
	ft_putstr_fd("  ss: ", 2);
	ft_putnbr_fd(bench->ss, 2);
	ft_putstr_fd("  pa: ", 2);
	ft_putnbr_fd(bench->pa, 2);
	ft_putstr_fd("  pb: ", 2);
	ft_putnbr_fd(bench->pb, 2);
	ft_putstr_fd("\n[bench] ra: ", 2);
	ft_putnbr_fd(bench->ra, 2);
	ft_putstr_fd("  rb: ", 2);
	ft_putnbr_fd(bench->rb, 2);
	ft_putstr_fd("  rr: ", 2);
	ft_putnbr_fd(bench->rr, 2);
	ft_putstr_fd("  rra: ", 2);
	ft_putnbr_fd(bench->rra, 2);
	ft_putstr_fd("  rrb: ", 2);
	ft_putnbr_fd(bench->rrb, 2);
	ft_putstr_fd("  rrr: ", 2);
	ft_putnbr_fd(bench->rrr, 2);
	ft_putstr_fd("\n", 2);
}

// void	print_strategy(t_bench *bench)
// {
// 	if (bench->strategy == 0)
// 		ft_putstr_fd("Adaptive / Auto\n", 2);
// 	if (bench->strategy == 1)
// 		ft_putstr_fd("Simple / O(n²)\n", 2);
// 	if (bench->strategy == 2)
// 		ft_putstr_fd("Medium / O(n√n)\n", 2);
// 	if (bench->strategy == 3)
// 		ft_putstr_fd("Complex / O(n log n)\n", 2);
// }

void	adaptiveauto(t_bench *bench)
{
	if (bench->adaptive)
	{
		ft_putstr_fd("Adaptive / ", 2);
		if (bench->strategy == 1)
			ft_putstr_fd("O(n^2)\n", 2);
		else if (bench->strategy == 2)
			ft_putstr_fd("O(n√n)\n", 2);
		else if (bench->strategy == 3)
			ft_putstr_fd("O(n log n)\n", 2);
	}
	else
	{
		if (bench->strategy == 1)
			ft_putstr_fd("Simple O(n^2)\n", 2);
		else if (bench->strategy == 2)
			ft_putstr_fd("Medium O(n√n)\n", 2);
		else if (bench->strategy == 3)
			ft_putstr_fd("Complex O(n log n)\n", 2);
	}
}

void	print_benchmark(t_bench *bench)
{
	int	front;
	int	back;

	if (bench == NULL || bench->active != 1)
		return ;
	front = (int)(bench->disorder * 100);
	back = (int)(bench->disorder * 10000) % 100;
	ft_putstr_fd("[bench] disorder: ", 2);
	ft_putnbr_fd(front, 2);
	ft_putstr_fd(".", 2);
	if (back < 10)
		ft_putstr_fd("0", 2);
	ft_putnbr_fd(back, 2);
	ft_putstr_fd("%\n", 2);
	ft_putstr_fd("[bench] strategy: ", 2);
	adaptiveauto(bench);
	ft_putstr_fd("[bench] total_ops: ", 2);
	ft_putnbr_fd(bench->total_ops, 2);
	print_totalops(bench);
}

// int	main (void)
// {
// 	t_bench *bench;
// 	bench = get_bench();
// 	bench->active = 1;
// 	bench->disorder = 14.08;

// 	bench->strategy = 0;

// 	bench->total_ops = 2921;
// 	bench->sa = 100; bench->sb = 45; bench->ss = 98;
// 	bench->pa = 0; bench->pb = 2;
// 	bench->ra = 300; bench->rb = 45; bench->rr = 98;
// 	bench->rra = 1; bench->rrb = 9; bench->rrr = 987;

// 	print_benchmark(bench);

// 	return(0);
// }