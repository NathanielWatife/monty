#include "monty.h"

/**
 * pint_error - print error message if the stack is empty.
 * @line: line.
 * Return: void.
 */
void pintError(unsigned int line)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line);
	exit(EXIT_FAILURE);
}

/**
 * swap_error - print error message if the stack is empty.
 * @line: line.
 * Return: void.
 */
void swapError(unsigned int line)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * add_error - print error message if the stack is empty.
 * @line: line.
 * Return: void.
 */
void addError(unsigned int line)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * sub_error - print error message if the stack is empty.
 * @line: line.
 * Return: void.
 */
void subError(unsigned int line)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * mul_error - print error message if the stack is empty.
 * @line: line.
 * Return: void.
 */
void mulError(unsigned int line)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * div_error - print error message if the stack is empty.
 * @line: line.
 * Return: void.
 */
void divError(unsigned int line)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line);
	exit(EXIT_FAILURE);
}

/**
 * mod_error - print error message if the stack is empty.
 * @line: line.
 * Return: void.
 */
void modError(unsigned int line)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line);
	exit(EXIT_FAILURE);
}

