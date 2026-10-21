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

#include "push_swap.h"

void	pushchunk(t_list **a, t_list **b, int min, int max)
{
	int	pushinchunk;
	int	target;
	int	scanned;
	int	size;

	pushinchunk = 0;
	size = lst_size(*a);
	scanned = 0;
	target = max - min + 1;
	while (pushinchunk < target && *a)
	{
		if (((*a)->rank >= min) && ((*a)->rank) <= max)
		{
			pb(a, b);
			pushinchunk++;
			scanned = 0;
			size = lst_size(*a);
		}
		else
		{
			ra(a);
			scanned++;
			if (scanned >= size)
				return ;
		}
	}
}

//put into chunk grp 
void	chunkpb(t_list **a, t_list **b, int totalnb, int chunk)
{
	int	chunk_size;
	int	i;
	int	min_rank;
	int	max_rank;

	i = 0;
	if (totalnb <= 0 || chunk <= 0)
		return ;
	chunk_size = totalnb / chunk;
	while (i < chunk)
	{
		min_rank = i * chunk_size;
		if (i == chunk - 1)
			max_rank = totalnb - 1;
		else
			max_rank = (i + 1) * chunk_size - 1;
		pushchunk(a, b, min_rank, max_rank);
		i++;
	}
}

int	getmaxposition(t_list *b, int *max_rank)
{
	t_list	*current;
	int		max_position;
	int		i;

	current = b;
	max_position = 0;
	i = 0;
	*max_rank = current->rank;
	while (current != NULL)
	{
		if ((current->rank) > *max_rank)
		{
			*max_rank = current->rank;
			max_position = i;
		}
		current = current->next;
		i++;
	}
	return (max_position);
}


void	chunkpa(t_list **a, t_list **b)
{
	int	max_rank;
	int	max_position;
	int	size;

	while (*b)
	{
		max_position = getmaxposition(*b, &max_rank);
		size = lst_size(*b);
		if (max_position <= size / 2)
		{
			while ((*b)->rank != max_rank)
				rb(b);
		}
		else
		{
			while ((*b)->rank != max_rank)
				rrotate("rrb", a, b);
		}
		pa(a, b);
	}
}


void	medium(t_list **a, t_list **b)
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
	chunkpb(a, b, totalnumber, chunk);
	chunkpa(a, b);
}

// #include "push_swap.h"

// int main(void)
// {
//     t_list      *stack_a;
//     t_list      *stack_b;
//     t_bench     *bench;
    
//     // A solid mix of 20 random numbers to test chunking
//     int         nums[] = {42, 15, 87, 2, 99, 12, 73, 56, 4, 33, 91, 8, 64, 21, 50, 5, 100, 38, 77, 19};
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