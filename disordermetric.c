/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disordermetric.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytee <ytee@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 01:13:39 by ytee              #+#    #+#             */
/*   Updated: 2026/10/03 01:13:39 by ytee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	compute_disorder(t_list	**stacka)
{
	float	mistakes;
	float	total_pairs;
	t_list	*i;
	t_list	*j;

	mistakes = 0;
	total_pairs = 0;
	i = *stacka;
	while (i != NULL)
	{
		j = i -> next;
		while (j != NULL)
		{
			total_pairs++;
			if ((i->content) > (j->content))
				mistakes++;
			j = j -> next;
		}
		i = i -> next;
	}
	return (mistakes/total_pairs);
}