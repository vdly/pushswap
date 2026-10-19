/*#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    t_pslist *stack_a;
    t_pslist *stack_b;
    t_pslist *curr;

    stack_a = NULL;
    stack_b = NULL;

    // Test with unsorted numbers: 4 -> 2 -> 1 -> 3
    stack_a = lst_new(4);
    add_back(&stack_a, lst_new(2));
    add_back(&stack_a, lst_new(1));
    add_back(&stack_a, lst_new(3));

    printf("--- Before Sorting (Stack A) ---\n");
    curr = stack_a;
    while (curr)
    {
        printf("%d -> ", curr->number);
        curr = curr->next;
    }
    printf("NULL\n\n");

    // Run sort
    simple(&stack_a, &stack_b);

    printf("\n--- After Sorting (Stack A) ---\n");
    curr = stack_a;
    while (curr)
    {
        printf("%d -> ", curr->number);
        curr = curr->next;
    }
    printf("NULL\n");

    return (0);
}*/