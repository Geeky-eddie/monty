#include "monty.h"
/**
* f_pstr - prints the string starting at the top of the stack,
* followed by a new
* @head: stack head
* @counter: line_number
* Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter; /*This is used to avoid the "unused parameter" warning*/

h = *head; /*'h' is a temporary variable pointing to d top of d stack*/

while (h)
{
if (h->n > 127 || h->n <= 0)
{
break; /*Break d loop if d value is not within d printable ASCII range*/}
printf("%c", h->n); /*printing d character value at d top of d stack*/
h = h->next; /* moving to the next element in the stack*/
}
printf("\n"); /* printing a new line at the end of the string*/
}
