/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 20:09:21 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/09 16:40:33 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked.h"

void lst_clear(t_list **lst)
{
	t_list *temp;
	t_list *next;

	if (!lst)
		return;
	temp = *lst;
	while (temp != NULL)
	{
		next = temp->next;
		del_one(temp);
		temp = next;
	}
	*lst = NULL;
}
