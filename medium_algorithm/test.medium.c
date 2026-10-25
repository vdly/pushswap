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

void	pushchunk(t_list **a, t_list **b, int min, int max)
{
	int	pushinchunk;
	int	target;

	pushinchunk = 0;
	target = max - min + 1;
	while ((pushinchunk < target) && *a)
	{
		if (((*a)->rank >= min) && ((*a)->rank) <= max)
		{
			pb(a, b);
			pushinchunk++;
		}
		else
			ra(a);
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
	*max_rank = -1;
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
		while (((*b)->rank) != max_rank)
		{
			max_position = getmaxposition(*b, &max_rank);
			size = lst_size(*b);
			if (max_position <= size / 2)
				rb(b);
			else
				rrb(b);
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

/*
#include <stdio.h>
#include <stdlib.h>

static void print_stack(t_list *lst, const char *name)
{
    printf("Stack %s: ", name);
    if (!lst)
    {
        printf("(empty)\n");
        return;
    }
    while (lst)
    {
        printf("[num: %d, rank: %d] ", lst->number, lst->rank);
        lst = lst->next;
    }
    printf("\n");
}

int main(void)
{
    t_list    *a;
    t_list    *b;

    a = NULL;
    b = NULL;

    // Hardcode test values into Stack A
    add_back(&a, lst_new(15));
    add_back(&a, lst_new(2));
    add_back(&a, lst_new(42));
    add_back(&a, lst_new(8));
    add_back(&a, lst_new(23));

    printf("=== BEFORE SORTING ===\n");
    print_stack(a, "A");

    // Run your chunk-sorting algorithm
    medium(&a, &b);

    printf("\n=== AFTER SORTING ===\n");
    print_stack(a, "A");
    print_stack(b, "B");

    return (0);
}*/