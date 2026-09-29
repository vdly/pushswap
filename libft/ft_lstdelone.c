/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 19:02:17 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/21 20:14:00 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free (lst);
}

// void	del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*node1 = ft_lstnew(ft_strdup("peanut"));
// 	t_list	*node2 = ft_lstnew(ft_strdup("butter"));
// 	t_list	*node3 = ft_lstnew(ft_strdup("kaya"));

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	head->next->next = NULL;
// 	ft_lstdelone(node3, del);
// 	printf("first node : %s\n", (char *)head->content);
// 	printf("second node : %s\n", (char *)head->next->content);
// 	free (head->next->content);
// 	free (head->next);
// 	free (head->content);
// 	free (head);
// 	return (0);
// }
