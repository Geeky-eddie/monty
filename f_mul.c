#include "monty.h"
/**
* f_mul - multiplies the top two elements of the stack.
* @head: stack head
* @counter: line_number
* Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;

h = *head; /*'h' is a temporary variable pointing 2 d top of d stack*/
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
fclose(bus.file);  /*'bus.file' is used to close a file*/
free(bus.content); /*'bus.content' is used to free dynamically alloc mem*/
free_stack(*head); /*'free_stack' is a function that frees d mem of d stack*/
exit(EXIT_FAILURE);
}

h = *head; /*resetting 'h' to the top of the stack*/
aux = h->next->n * h->n; /*aux' stores d result of d mul of d top 2 elem*/
h->next->n = aux; /* updating d second element with the result of the mul*/
*head = h->next;  /* updating d head of d stack to 2 next elem*/
free(h); /* freeing the memory of the original top elemen*/
}
