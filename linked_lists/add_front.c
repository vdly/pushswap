/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 22:53:18 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/03 19:35:22 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked.h"

void	add_front(t_pslist **lst, t_pslist *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	new->prev = NULL;
	*lst = new;
}

// int	main()
// {
// 	t_pslist	*head = NULL;
// 	t_pslist	*node1 = ft_lstnew("apples");
// 	t_pslist	*node2 = ft_lstnew("pineapple");
// 	t_pslist	*node3 = ft_lstnew("lemons");

// 	ft_lstadd_front(&head, node1);
// 	printf("first node : %s\n\n", (char *)head->content);
// 	ft_lstadd_front(&head, node2);
// 	printf("first node : %s\n", (char *)head->content);
// 	printf("second node : %s\n\n", (char *)head->next->content);
// 	ft_lstadd_front(&head, node3);
// 	printf("first node : %s\n", (char *)head->content);
// 	printf("second node : %s\n", (char *)head->next->content);
// 	printf("third node : %s\n", (char *)head->next->next->content);
// 	free (head->next->next);
// 	free (head->next);
// 	free (head);
// 	return (0);
// }
