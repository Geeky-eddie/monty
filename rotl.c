#include "monty.h"
/**
 * m_rotl - rotates the stack to the top
 * @stack: pointer to the stack
 * @line_number: line number
 *
 * Return: No return
 */
void m_rotl(stack_t **stack,  __attribute__((unused)) unsigned int line_number)
{
stack_t *tmp = *stack, *aux;

if (*stack == NULL || (*stack)->next == NULL)
{
return;
}
aux = (*stack)->next;
aux->prev = NULL;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = *stack;
(*stack)->next = NULL;
(*stack)->prev = tmp;
(*stack) = aux;
}
