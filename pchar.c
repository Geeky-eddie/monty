#include "monty.h"
/**
* f_pchar - prints the char at the top of the stack,
* followed by a new line
* @head: stack head
* @counter: line_number
* Return: no return
*/
void f_pchar(stack_t **head, unsigned int counter)
{
stack_t *h;

h = *head; /*'h' is a temporary variable pointing to d top of d stack*/
if (!h)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
fclose(bus.file);  /*'bus.file' is used to close a file*/
free(bus.content); /*'bus.content'is used 2 free dynamically alloc mem*/
free_stack(*head); /*'free_stack' is a func that frees d memory of d stack*/
exit(EXIT_FAILURE);
}
if (h->n > 127 || h->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", h->n); /*printing d character value at d top of d stack*/
}
