/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:36:46 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/13 17:33:52 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_H
# define LINKED_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct ps_list
{
	int				number;
	int				index;
	struct ps_list	*prev;
	struct ps_list	*next;

}	t_list;

void	add_back(t_list **lst, t_list *new);
void	add_front(t_list **lst, t_list *new);
void	lst_clear(t_list **lst);
void	del_one(t_list *lst);
t_list	*lst_last(t_list *lst);
t_list	*lst_new(int number);
int		lst_size(t_list *lst);

#endif