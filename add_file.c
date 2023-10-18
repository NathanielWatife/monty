#include "monty.h"
/**
 * F_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: lineNumber
 * Return: no return
*/
void F_Add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
	h = h->next;
	len++;
	}
	if (len < 2)
	{
	fprintf(stderr, "L%d: can't add, stack too short\n", counter);
	fclose(bus.file);
	free(bus.content);
	freeStack(*head);
	exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}

