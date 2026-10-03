/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 18:17:57 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/03 19:35:29 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked.h"

void	add_back(t_pslist **lst, t_pslist *new)
{
	t_pslist	*link;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	link = lst_last(*lst);
	new->prev = link;
	link->next = new;
	new->next = NULL;
}

// int	main()
// {
// 	t_pslist	*head = NULL;
// 	t_pslist	*node1 = ft_lstnew("peanut");
// 	t_pslist	*node2 = ft_lstnew("butter");
// 	t_pslist	*node3 = ft_lstnew("kaya");

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	printf("first node : %s\n", (char *)head->content);
// 	printf("second node : %s\n", (char *)head->next->content);
// 	printf("third node : %s\n", (char *)head->next->next->content);
// 	free (head->next->next);
// 	free (head->next);
// 	free (head);
// 	return (0);
// }
