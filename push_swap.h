/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 22:26:15 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/18 09:18:35 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
void	rrotate(char *type, t_list **a, t_list **b);

void	sa(t_list **a);
void	sa(t_list **b);
void	swap(char *type, t_list **a, t_list **b);

// parse

void	error(t_list **stack);
bool	selector(char **argv);
int		only_num(char *str);
int		duplicates(char **argv, int index, long current_num);
void	parse(int argc, char **argv, t_list **stack);

// indexing

void	indexing(t_list *stack);

// complex

int		count_bits(int size);
void	radix_sort(t_list *stack_a, t_list *stack_b);

// utils

int		ft_strcmp(const char *s1, const char *s2);
long	ft_atol(char *str);

#endif