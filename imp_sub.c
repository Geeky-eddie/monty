#include "monty.h"
/**
*f_sub- sustration
*@head: stack head
*@counter: line_number
*Return: no return
*/
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *aux;
int sus, nodes;

aux = *head; /*'aux' is a temp variable pointing to d top of d stack*/
for (nodes = 0; aux != NULL; nodes++)
aux = aux->next;

if (nodes < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content); /* 'bus.content' is used 2 free dynamically allocmem */
free_stack(*head); /* free_stack' is a function that frees d mem of d stack */
exit(EXIT_FAILURE);
}
aux = *head; /* resetting 'aux' to the top of the stack */
sus = aux->next->n - aux->n; /*'sus' stores d result of d subtraction */
aux->next->n = sus; /* updating d 2nd element wit d result of d subtraction */
*head = aux->next; /* updating the head of the stack to the next element*/
free(aux)
}
