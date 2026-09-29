/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 20:09:21 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/22 17:13:05 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next;

	if (!lst)
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		next = temp->next;
		ft_lstdelone(temp, del);
		temp = next;
	}
	*lst = NULL;
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
// 	printf("first node : %s\n", (char *)head->content);
// 	printf("second node : %s\n", (char *)head->next->content);
// 	printf("third node : %s\n", (char *)head->next->next->content);
// 	ft_lstclear(&head, del);
// 	return (0);
// }
