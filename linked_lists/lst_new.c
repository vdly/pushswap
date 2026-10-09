/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:31:15 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/09 16:40:33 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked.h"

t_list *lst_new(int number)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->number = number;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}
