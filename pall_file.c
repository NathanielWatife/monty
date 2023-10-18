#include "monty.h"
/**
 * F_Pall - It's prints out the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void F_Pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
	return;
	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	}
}
