#include "monty.h"
/**
* f_div - divides the top two elements of the stack.
* @head: stack head
* @counter: line_number
* Return: no return
*/
void f_div(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;

h = *head; /* 'h' is a temp variable pointing to 2 top of the stack*/
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
fclose(bus.file);  /*bus.file' is used to close a file*/
free(bus.content); /*'bus.content' is used to free dynamically alloc memory*/
free_stack(*head); /*'free_stack' is a function that frees d mem of d stack */
exit(EXIT_FAILURE);
}
h = *head; /* resetting 'h' to the top of the stack*/
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = h->next->n / h->n; /*'aux' stores d result of d division of d 2 elem */
h->next->n = aux; /* update d second element wit d result of d division */
*head = h->next;
free(h); /* freeing the memory of the original top element */
}
