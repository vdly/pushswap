/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 23:04:54 by jodehii           #+#    #+#             */
/*   Updated: 2026/10/09 16:40:33 by jodehii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked.h"

int main(int ac, char **av)
{
	t_list **head;
	t_list *node;
	int i;
	int num;

	i = 2;
	if (ac <= 1)
		return (printf("error"));
	node = malloc(sizeof(t_list));
	node->number = atoi(av[i]);
	head = &node;
	while (ac > 1)
	{
		del_one(node);
		node = lst_new(atoi(av[i++]));
		add_back(head, node);
		i++;
	}
	lst_clear(head);
	printf("node->num : %d\n", node->number);
	printf("node->num : %d\n", node->next->number);
	printf("node->num : %d\n", node->next->next->number);
}
