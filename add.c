#include "monty.h"

/**
 * add_top_two_elements - Adds the top two elements of the stack.
 * @stack_head: Pointer to the stack head.
 * @line_number: Line number in the file.
 * Return: No return value.
 */
void add_top_two_elements(stack_t **stack_head, unsigned int line_number)
{
    stack_t *current;
    int stack_length = 0, sum;

    current = *stack_head;

    while (current)
    {
        current = current->next;
        stack_length++;
    }

    if (stack_length < 2)
    {
        fprintf(stderr, "L%d: Unable to add, stack is too short\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack_head);
        exit(EXIT_FAILURE);
    }

    current = *stack_head;
    sum = current->n + current->next->n;
    current->next->n = sum;
    *stack_head = current->next;
    free(current);
}
