/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:31:15 by jodehii           #+#    #+#             */
/*   Updated: 2026/08/21 01:06:04 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	t_list	*current_node;
// 	t_list	*next_node;
// 	char	*str1 = "apple pie";
// 	char	*str2 = "choco pie";

// 	current_node = ft_lstnew(str1);
// 	if (current_node == NULL)
// 	{
// 		printf("memory allocation wrong btw\n");
// 		return (1);
// 	}
// 	printf("content first node: %s\n", (char *)current_node->content);
// 	if (current_node->next == NULL)
// 		printf("yay! next pointer is NULL\n");
// 	else
// 		printf("yo next pointer isnt NULL\n");
// 	next_node = ft_lstnew(str2);
// 	current_node->next = next_node;
// 	printf("content second node: %s\n", (char *)next_node->content);
// 	free (next_node);
// 	free (current_node);
// 	return (0);
// }
