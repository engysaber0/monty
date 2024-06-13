#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
//first i create a pointer to traverse DLL from head
stack_t *h;
(void)counter;

h = *head;
//if there are no node it return nothing
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
