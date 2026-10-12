/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:42:42 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/12 18:48:35 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked.h"

int	lst_size(t_list *lst)
{
	int	size;

	size = 0;
	if (lst != NULL)
	{
		size++;
		while (lst->next != NULL)
		{
			lst = lst->next;
			size++;
		}
	}
	return (size);
}
