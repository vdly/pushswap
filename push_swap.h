/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:32:39 by ytee              #+#    #+#             */
/*   Updated: 2026/10/24 17:01:31 by ytee             ###   ########.fr       */
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

// operations

void	pa(t_list **stacka, t_list **stackb);
void	pb(t_list **stacka, t_list **stackb);

void	ra(t_list **stacka);
void	rb(t_list **stackb);
void	rr(t_list **stacka, t_list **stackb);

void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

void	sa(t_list **a);
void	sa(t_list **b);
void	ss(char *type, t_list **a, t_list **b);

// parse

void	error(t_list **stack);
bool	selector(char **argv);
int		only_num(char *str);
int		duplicates(char **argv, int index, long current_num);
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

// complex

int		count_bits(int size);
void	radix_sort(t_list **stack_a, t_list **stack_b);

// utils

int		ft_strcmp(const char *s1, const char *s2);
long	ft_atol(char *str);
int		sorted(t_list *stack);
int		ft_sqt(unsigned int totalnumber);

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
}			t_bench;

t_bench	*get_bench(void);
void	print_benchmark(t_bench *bench);
void	adaptiveauto(t_bench *bench);

//adaptive
void	adaptive(t_list **stacka, t_list **stackb);

//disorder metric
float	disordermetric(t_list	**stacka);
# endif