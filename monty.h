#ifndef _MONTY_H_
#define _MONTY_H_

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int globalNumber;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/** PROTOTYPES **/
void opReFile(char **argv);
char **tokenizer(char *s, char *delim);
int countWords(char *str);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void invalidInstrution(int line, char *opcode);
void openError(char **argv);
void mallocError(void);
void errorArgv(void);
void frees(stack_t **stack);
void intError(int line);
void pintError(unsigned int line);
void popError(unsigned int line);
void swapError(unsigned int line);
void addError(unsigned int line);
void subError(unsigned int line);
void divError(unsigned int line);
void mulError(unsigned int line);
void modError(unsigned int line);

void (*getOpCode(char *token, unsigned int line))(stack_t **, unsigned int);

/*/**
 * get_op_code - tydt
 * @token: operation code
 * @line: line readed
 * Return: void
 */
static const instruction_t list[] = {
	{"push", push},
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
	{"add", add},
	{"sub", sub},
	{"div", _div},
	{"mul", mul},
	{"mod", mod},
	{"nop", nop},
	{NULL, NULL}};

#endif /* _MONTY_H_ */

