/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 22:53:18 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/09 16:39:28 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_libft_list **lst, t_libft_list *new)
{
	if (!lst || !new)
		return;
	new->next = *lst;
	*lst = new;
}

// int	main()
// {
// 	t_libft_list	*head = NULL;
// 	t_libft_list	*node1 = ft_lstnew("apples");
// 	t_libft_list	*node2 = ft_lstnew("pineapple");
// 	t_libft_list	*node3 = ft_lstnew("lemons");

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
