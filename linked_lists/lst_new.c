/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:31:15 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/20 22:30:53 by jodehii          ###   ########.fr       */
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
	new->index = -1;
	return (new);
}
