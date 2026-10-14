/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 22:26:15 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/13 16:17:27 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "linked_lists/linked.h"
# include "libft_printf/ft_printf.h"
# include "libft_printf/libft/libft.h"
# include <limits.h>
# include <stdbool.h>

int		ft_strcmp(const char *s1, const char *s2);
long	ft_atol(char *str);
void	error(t_list **stack);
bool	selector(char **argv);
int		only_num(char *str);
int		duplicates(char **argv, int index, long current_num);
void	parse(int argc, char **argv, t_list **stack);

#endif