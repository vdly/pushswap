/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 23:38:15 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/27 04:53:06 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_bits(int size)
{
	int	i;

	i = 0;
	while ((size >> i) != 0)
		i++;
	return (i);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int		bits;
	int		size;
	int		bit_pos;
	int		i;

	size = lst_size(*stack_a);
	bits = count_bits(size - 1);
	bit_pos = 0;
	while (bit_pos <= bits)
	{
		i = 0;
		while (i < size)
		{
			if (((*stack_a)->index >> bit_pos) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			i++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		bit_pos++;
		if (sorted(*stack_a))
			return ;
	}
}

// int	main(void)
// {
// 	int num = 500;

// 	int bits = count_bits(num);
// 	printf("bits in %d = %d\n", num, bits);
// 	return (0);
// }
