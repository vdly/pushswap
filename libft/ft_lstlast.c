/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:52:25 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/21 18:15:55 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*current;
// 	t_list	*temp;
// 	t_list	*node1 = ft_lstnew("spagee");
// 	t_list	*node2 = ft_lstnew("chagee");
// 	t_list	*node3 = ft_lstnew("grapefruit");
// 	int		i = 1;

// 	ft_lstadd_front(&head, node3);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node1);
// 	current = head;
// 	temp = head;
// 	while (temp != NULL)
// 	{
// 		printf("node %d : %s\n", i, (char *)temp->content);
// 		temp = temp->next;
// 		i++;
// 	}
// 	current = ft_lstlast(current);
// 	printf("last lst content : %s\n", (char *)current->content);
// 	free (head->next->next);
// 	free (head->next);
// 	free (head);
// 	return (0);
// }
