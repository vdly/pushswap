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
Chunk
//count total numbers
//squareroot (ft_sqt)
//assign the rank [4, 7, 8 , 10] -> 0,1,2,3...
//put them into chunk group
//pb, then pa (with checking condition (if it is under chunk 1? or chunk2...))

#include "push_swap.h"
#include <stdio.h>

t_pslist	*lst_new(int number);
unsigned int	lst_size(t_pslist *lst);

static void	pushchunk(t_pslist **stacka, t_pslist **stackb, int min, int max)
{
	int	pushinchunk;
	int	target;

	pushinchunk = 0;
	target = max - min + 1;
	while ((pushinchunk < target) && *stacka)
	{
		if (((*stacka)->rank >= min) && ((*stacka)->rank) <= max)
		{	
			pb(stacka, stackb);
			pushinchunk++;
		}
		else
			ra(stacka);
	}
}

//put into chunk grp 
void	chunkpb(t_pslist **stacka, t_pslist **stackb, int totalnumber, int chunk)
{
	int	chunk_size;
	int	i;
	int	min_rank;
	int	max_rank;

	i = 0;
	chunk_size = totalnumber / chunk; //[5/2] = 2items per chunk
	while (i < chunk)
	{
		min_rank = i * chunk_size; //[0*2] = 0
		if (i == chunk - 1) //0 == 1
			max_rank = totalnumber - 1; 
		else 
			max_rank = (i + 1) * chunk_size - 1; //1 * = 1,, [0,1] 2 items
		pushchunk(stacka, stackb, min_rank, max_rank);
		i++;
	}
}

static int	getmaxposition(t_pslist *stackb, int *max_rank)
{
	t_pslist	*current;
	int			max_position;
	int			i;

	current = stackb;
	max_position = 0;
	i = 0;
	*max_rank = -1;

	while (current != NULL)
	{
		if ((current->rank)> *max_rank) [1, 2, 6]
		{
			*max_rank = current->rank;
			max_position = i;
		}
		current = current->next;
		i++;
	}
	return (max_position);
}

void	chunkpa(t_pslist **stacka, t_pslist **stackb)
{
	int			max_rank;
	int			max_position;
	int			size;

	while (*stackb)
	{
		max_position = getmaxposition(*stackb, &max_rank); [2]
		size = lst_size(*stackb);
		while (((*stackb)->rank) != max_rank)
		{
			if (max_position <= size/2)
				rb(stackb);
			else 
				rrb(stackb);
		}
		pa(stacka, stackb);
	}
}

void	medium(t_pslist **stacka, t_pslist **stackb)
{
	unsigned int	totalnumber;
	unsigned int	chunk;
	t_pslist	*current;
	t_pslist	*compare;
	unsigned int	count;
	
	totalnumber = lst_size(*stacka);
	chunk = ft_sqt(totalnumber);
	current = *stacka;
	while (current != NULL) 
	{
		compare = *stacka;
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
	chunkpb(stacka, stackb, totalnumber, chunk);
	chunkpa(stacka, stackb);
}

/*
#include <stdio.h>
#include <stdlib.h>

static void print_stack(t_pslist *lst, const char *name)
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
    t_pslist    *stacka;
    t_pslist    *stackb;

    stacka = NULL;
    stackb = NULL;

    // Hardcode test values into Stack A
    add_back(&stacka, lst_new(15));
    add_back(&stacka, lst_new(2));
    add_back(&stacka, lst_new(42));
    add_back(&stacka, lst_new(8));
    add_back(&stacka, lst_new(23));

    printf("=== BEFORE SORTING ===\n");
    print_stack(stacka, "A");

    // Run your chunk-sorting algorithm
    medium(&stacka, &stackb);

    printf("\n=== AFTER SORTING ===\n");
    print_stack(stacka, "A");
    print_stack(stackb, "B");

    return (0);
}*/