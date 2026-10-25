/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:32:39 by ytee              #+#    #+#             */
/*   Updated: 2026/10/26 04:22:56 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "linked_lists/linked.h"
# include "libft_printf/ft_printf.h"
# include "libft_printf/libft/libft.h"
# include <limits.h>
# include <stdbool.h>

//bench 

typedef struct s_bench
{
	int		active;
	float	disorder;
	int		strategy;
	int		adaptive;
	int		total_ops;
	int		sa;
	int		sb;
	int		ss;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
}	t_bench;

t_bench	*get_bench(void);
void	print_benchmark(t_bench *bench);
void	adaptiveauto(t_bench *bench);

// operations

void	pa(t_list **stacka, t_list **stackb, t_bench *bench);
void	pb(t_list **stacka, t_list **stackb, t_bench *bench);

void	rotate(t_list **stack);
void	ra(t_list **stacka, t_bench *bench);
void	rb(t_list **stackb, t_bench *bench);
void	rr(t_list **stacka, t_list **stackb, t_bench *bench);

void	rrotate(t_list **stack);
void	rra(t_list **a, t_bench *bench);
void	rrb(t_list **b, t_bench *bench);
void	rrr(t_list **a, t_list **b, t_bench *bench);

void	sa(t_list **, t_bench *bench);
void	sb(t_list **b, t_bench *bench);
void	bench_ss(t_bench *bench);
void	ss(char *type, t_list **a, t_list **b, t_bench *bench);

// parse

void	error(t_list **stack);
int		only_num(char *str);
int		duplicates(char **argv, int index, long current_num);
bool	selector(char **argv, t_list **stack);
void	parse(int argc, char **argv, t_list **stack);

// indexing

void	indexing(t_list **stack);

// simple

void	simple(t_list **stacka, t_list **stackb, t_bench *bench);

// medium 

void	medium(t_list **a, t_list **b, t_bench *bench);
void	chunkpa(t_list **a, t_list **b, t_bench *bench);
void	chunkpb(t_list **a, t_list **b, int totalnb, int chunk, t_bench *bench);
int		getmaxposition(t_list *b, int *max_rank);
void	pushchunk(t_list **a, t_list **b, int min, int max, t_bench *bench);
int		rotate_chunk(t_list **a, int *scanned, int size, t_bench *bench);
int		ft_sqt(unsigned int totalnumber);

// complex

int		count_bits(int size);
void	radix_sort(t_list **stack_a, t_list **stack_b, t_bench *bench);

// utils

int		ft_strcmp(const char *s1, const char *s2);
long	ft_atol(char *str);
int		sorted(t_list *stack);

//adaptive

void	adaptive(t_list **stacka, t_list **stackb, t_bench *bench);

//disorder metric

float	disordermetric(t_list	**stacka);

#endif