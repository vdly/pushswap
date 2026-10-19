/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 20:09:21 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/09 00:03:03 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked.h"

void	lst_clear(t_pslist **lst)
{
	t_pslist	*temp;
	t_pslist	*next;

	if (!lst)
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		next = temp->next;
		del_one(temp);
		temp = next;
	}
	*lst = NULL;
}
