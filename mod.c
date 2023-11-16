#include "monty.h"
#include "monty.h"
/**
* f_mod - computes the rest of the division of the second
* top element of the stack by the top element of the stack
* @head: stack head
* @counter: line_number
* Return: no return
*/
void f_mod(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;

h = *head; /* 'h'is a temp variable pointing to the top of d stack*/
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head); /*free_stack' is a func that frees d mem of d stack*/
exit(EXIT_FAILURE);
}
h = *head; /*resetting 'h' to the top of the stack*/
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = h->next->n % h->n; /*aux' stores d reslt of d modulo operation*/
h->next->n = aux; /*updating d 2nd elem wit d res of d modulo operation*/
*head = h->next; /* updating d head of d stack to d next element*/
free(h); /*freeing the memory of the original top element*/
}
