/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 21:40:15 by ytee              #+#    #+#             */
/*   Updated: 2026/10/20 21:40:15 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	adaptive(t_list **stacka, t_list **stackb)
{
	t_bench	*bench;
	float	disorder;

	disorder = disordermetric(stacka);
	bench = get_bench();
	if (bench != NULL && bench->active == 1)
		bench->disorder = disorder;
	if (disorder < 0.2)
	{
		simple(stacka, stackb);
		bench->strategy = 1;
	}
	else if (disorder >= 0.2 && disorder < 0.5)
	{
		medium(stacka, stackb);
		bench->strategy = 2;
	}
	else
	{
		radix_sort(stacka, stackb);
		bench->strategy = 3;
	}
}