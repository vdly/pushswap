/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:31:15 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/09 00:03:13 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked.h"

t_pslist	*lst_new(int number)
{
	t_pslist	*new;

	new = malloc(sizeof(t_pslist));
	if (!new)
		return (0);
	new->number = number;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}
