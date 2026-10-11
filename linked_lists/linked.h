/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:36:46 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/11 22:31:18 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_H
#define LINKED_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../push_swap.h"

typedef struct p_list
{
	int number;
	int	index;
	struct p_list *next;
	struct p_list *prev;

} t_list;

void	add_back(t_list **lst, t_list *new);
void	add_front(t_list **lst, t_list *new);
void	lst_clear(t_list **lst);
void	del_one(t_list *lst);
t_list	*lst_last(t_list *lst);
t_list	*lst_new(int number);
int		lst_size(t_list *lst);

#endif