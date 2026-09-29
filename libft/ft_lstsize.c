/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 14:42:42 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/21 17:45:22 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

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

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*node1 = ft_lstnew("OOLONG");
// 	t_list	*node2 = ft_lstnew("TIEGUANYIN");
// 	t_list	*node3 = ft_lstnew("JASMINE");
// 	t_list	*node4 = ft_lstnew("PUER");

// 	ft_lstadd_front(&head, node1);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);
// 	ft_lstadd_front(&head, node4);
// 	t_list	*current = head;
// 	int		i = 1;
// 	while (current != NULL)
// 	{
// 		printf("node %d : %s\n", i, (char *)current->content);
// 		current = current->next;
// 		i++;
// 	}
// 	printf("sizeof(lst) : %d\n", ft_lstsize(head));
// 	free (head->next->next->next);
// 	free (head->next->next);
// 	free (head->next);
// 	free(head);
// 	return (0);
// }
