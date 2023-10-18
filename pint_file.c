#include "monty.h"
/**
 * F_Pint -It's prints out the top stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void F_Pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
	fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
	fclose(bus.file);
	free(bus.content);
	freeStack(*head);
	exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

