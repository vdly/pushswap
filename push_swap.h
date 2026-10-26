/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:32:39 by ytee              #+#    #+#             */
/*   Updated: 2026/10/27 02:04:23 by jodehii          ###   ########.fr       */
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

void	pa(t_list **stacka, t_list **stackb);
void	pb(t_list **stacka, t_list **stackb);

void	rotate(t_list **stack);
void	ra(t_list **stacka);
void	rb(t_list **stackb);
void	rr(t_list **stacka, t_list **stackb);

void	rrotate(t_list **stack);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

void	sa(t_list **a);
void	sb(t_list **b);
void	bench_ss(t_bench *bench);
void	ss(char *type, t_list **a, t_list **b);

// parse

void	error(t_list **stack);
int		only_num(char *str);
int		duplicates(t_list *stack, long current_num);
bool	selector(char **argv);
void	parse(int argc, char **argv, t_list **stack);

// indexing

void	indexing(t_list **stack);

// simple

void	simple(t_list **stacka, t_list **stackb);

// medium 

void	medium(t_list **a, t_list **b);
void	chunkpa(t_list **a, t_list **b);
void	chunkpb(t_list **a, t_list **b, int totalnb, int chunk);
int		getmaxposition(t_list *b, int *max_rank);
void	pushchunk(t_list **a, t_list **b, int min, int max);
int		rotate_chunk(t_list **a, int *scanned, int size);
int		ft_sqt(unsigned int totalnumber);

// complex

int		count_bits(int size);
void	radix_sort(t_list **stack_a, t_list **stack_b);

// utils

int		ft_strcmp(const char *s1, const char *s2);
long	ft_atol(const char *str);
int		sorted(t_list *stack);

//adaptive

void	adaptive(t_list **stacka, t_list **stackb);

//disorder metric

float	disordermetric(t_list	**stacka);

#endif