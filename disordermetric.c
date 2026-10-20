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

#include "push_swap.h"

float	compute_disorder(t_list	**stacka)
{
	float	mistakes;
	float	total_pairs;
	t_list	*current;
	t_list	*nextdigit;

	mistakes = 0;
	total_pairs = 0;
	current = *stacka;
	if (stacka == NULL || *stacka == NULL || (*stacka)->next == NULL)
		return (0.0);
	while (current != NULL)
	{
		nextdigit = current->next;
		while (nextdigit != NULL)
		{
			total_pairs++;
			if ((current->number) > (nextdigit->number))
				mistakes++;
			nextdigit = nextdigit->next;
		}
		current = current->next;
	}
	return (mistakes / total_pairs);
}

/*int main(void)
{
    t_list *stack_a;
    t_list *curr;
    float    disorder_score;

    stack_a = NULL;

    // Test with an unsorted stack: 4 -> 2 -> 1 -> 3
    stack_a = lst_new(4);
    add_back(&stack_a, lst_new(2));
    add_back(&stack_a, lst_new(1));
    add_back(&stack_a, lst_new(3));

    printf("--- Stack A Contents ---\n");
    curr = stack_a;
    while (curr)
    {
        // Change 'number' to 'content' if your struct uses content instead
        printf("%d -> ", curr->number);
        curr = curr->next;
    }
    printf("NULL\n\n");

    // Compute and print the disorder metric
    disorder_score = compute_disorder(&stack_a);
    printf("Disorder Metric Score: %.4f (0.0 = fully sorted, 1.0 =
			 fully reversed)\n", disorder_score);

    return (0);
}*/