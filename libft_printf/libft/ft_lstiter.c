/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:04:48 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/09 16:39:28 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_libft_list *lst, void (*f)(void *))
{
	if (!lst)
		return;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("nodes -> %s\n", (char *)content);
// }

// void	add_exclamation(void *content)
// {
// 	char	*str;

// 	str = (char *)content;
// 	strcat(str, "!");
// }

// void	del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_libft_list	*head = NULL;
// 	t_libft_list	*node1 = ft_lstnew(ft_strdup("peanut"));
// 	t_libft_list	*node2 = ft_lstnew(ft_strdup("butter"));
// 	t_libft_list	*node3 = ft_lstnew(ft_strdup("kaya"));

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	ft_lstiter(head, print_content);
// 	ft_lstiter(head, add_exclamation);
// 	ft_lstiter(head, print_content);
// 	ft_lstclear(&head, del);
// 	return (0);
// }
