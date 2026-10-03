/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:36:46 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/03 20:02:22 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_H
# define LINKED_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../push_swap.h"

typedef struct p_list
{
	int				number;
	struct p_list	*next;
	struct p_list	*prev;

}	t_pslist;

void			add_back(t_pslist **lst, t_pslist *new);
void			add_front(t_pslist **lst, t_pslist *new);
void			lst_clear(t_pslist **lst);
void			del_one(t_pslist *lst);
t_pslist		*lst_last(t_pslist *lst);
t_pslist		*lst_new(int number);
unsigned int	lst_size(t_pslist *lst);

#endif