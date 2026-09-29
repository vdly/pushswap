/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:52:25 by jodehii           #+#    #+#             */
/*   Updated: 2026/09/26 21:27:41 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked.h"

t_list	*lst_last(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
