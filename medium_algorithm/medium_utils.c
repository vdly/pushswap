/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:11:46 by ytee              #+#    #+#             */
/*   Updated: 2026/10/22 17:11:46 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	rotate_chunk(t_list **a, int *scanned, int size)
{
	ra(a);
	(*scanned)++;
	if (*scanned >= size)
		return (1);
	return (0);
}

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
		else if (rotate_chunk(a, &scanned, size))
			return ;
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
				rrb(b);
		}
		pa(a, b);
	}
}
