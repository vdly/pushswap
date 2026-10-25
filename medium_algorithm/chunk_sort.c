/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 00:43:11 by ytee              #+#    #+#             */
/*   Updated: 2026/10/16 00:43:11 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Chunk
//count total numbers
//squareroot (ft_sqt)
//assign the rank [4, 7, 8 , 10] -> 0,1,2,3...
//put them into chunk group
//pb, then pa (with checking condition (if it is under chunk 1? or chunk2...))

#include "../push_swap.h"

int	ft_sqt(unsigned int totalnumber)
{
	unsigned int	i;

	i = 0;
	while (i * i <= totalnumber)
		i++;
	return (i - 1);
}

void	medium(t_list **a, t_list **b, t_bench *bench)
{
	unsigned int	totalnumber;
	unsigned int	chunk;
	t_list			*current;
	t_list			*compare;
	unsigned int	count;

	totalnumber = lst_size(*a);
	chunk = ft_sqt(totalnumber);
	current = *a;
	while (current != NULL)
	{
		compare = *a;
		count = 0;
		while (compare != NULL)
		{
			if ((current->number) > (compare->number))
				count++;
			compare = compare->next;
		}
		current->rank = count;
		current = current->next;
	}
	chunkpb(a, b, totalnumber, chunk, bench);
	chunkpa(a, b, bench);
}

// #include "push_swap.h"

// int main(void)
// {
//     t_list      *stack_a;
//     t_list      *stack_b;
//     t_bench     *bench;
//     // A solid mix of 20 random numbers to test chunking
//     int         nums[] = {42, 15, 87, 2, 99, 12, 73, 56, 4, 
// 33, 91, 8, 64, 21, 50, 5, 100, 38, 77, 19};
//     int         i;
//     int         total_nums;

//     stack_a = NULL;
//     stack_b = NULL;
//     bench = get_bench();

//     // 1. Activate benchmark
//     bench->active = 1;
//     bench->strategy = 2; // Medium sort

//     // 2. Loop through the array and build Stack A automatically
//     total_nums = sizeof(nums) / sizeof(nums[0]);
//     i = 0;
//     while (i < total_nums)
//     {
//         add_back(&stack_a, lst_new(nums[i]));
//         i++;
//     }

//     // 3. Run your Chunk Sort algorithm
//     medium(&stack_a, &stack_b);

// 	    // Check final stack A
//     printf("\nFinal stack A:\n");
//     t_list *current = stack_a;
//     int sorted = 1;

//     while (current)
//     {
//         printf("%d ", current->number);
//         if (current->next
//             && current->number > current->next->number)
//             sorted = 0;
//         current = current->next;
//     }
//     printf("\n");

//     if (sorted && stack_b == NULL)
//         printf("SORTED OK!\n");
//     else
//         printf("SORTING FAILED!\n");
//     // 4. Print the benchmark report to stderr
//     print_benchmark(bench);

//     // 5. Free memory
//     lst_clear(&stack_a);

//     return (0);
// }