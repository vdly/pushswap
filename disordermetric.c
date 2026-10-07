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

float	compute_disorder(t_pslist	**stacka)
{
	float	mistakes;
	float	total_pairs;
	t_pslist	*i;
	t_pslist	*j;

	mistakes = 0;
	total_pairs = 0;
	i = *stacka;
	if (stacka == NULL || *stacka == NULL || (*stacka)->next == NULL)
		return (0.0);
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