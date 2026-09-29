/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:18:31 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/22 19:31:38 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}

// void	del(void *content)
// {
// 	free(content);
// }

// void	print_content(void *content)
// {
// 	printf("nodes -> %s\n", (char *)content);
// }

// void	*add_exclamation(void *content)
// {
// 	char	*str;
// 	char	*new;

// 	str = (char *)content;
// 	new = ft_strdup(str);
// 	strcat(new, "!");
// 	return (new);
// }

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*node1 = ft_lstnew(ft_strdup("peanut"));
// 	t_list	*node2 = ft_lstnew(ft_strdup("butter"));
// 	t_list	*node3 = ft_lstnew(ft_strdup("kaya"));
// 	t_list	*new;

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	printf("first node : %s\n", (char *)head->content);
// 	printf("second node : %s\n", (char *)head->next->content);
// 	printf("third node : %s\n", (char *)head->next->next->content);
// 	new = ft_lstmap(head, add_exclamation, del);
// 	ft_lstiter(new, print_content);
// 	ft_lstclear(&head, del);
// 	ft_lstclear(&new, del);
// 	return (0);
// }
