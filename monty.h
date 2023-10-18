#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - The doubly linked list is a  representation of either a queue or stack
 * @n: This presents an integer
 * @prev: These points to the previous element of either a queue or stack
 * @next: points to the next element of either a queue or stack
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO ALX cohort 17 project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: This flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_s;
extern bus_s bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO ALX cohort 17 project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void F_Push(stack_t **head, unsigned int number);
void F_Pall(stack_t **head, unsigned int number);
void F_Pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void freeStack(stack_t *head);
void F_Pop(stack_t **head, unsigned int counter);
void f_Swap(stack_t **head, unsigned int counter);
void F_Add(stack_t **head, unsigned int counter);
void F_Nop(stack_t **head, unsigned int counter);
void F_Sub(stack_t **head, unsigned int counter);
void F_Div(stack_t **head, unsigned int counter);
void F_Mul(stack_t **head, unsigned int counter);
void F_Mod(stack_t **head, unsigned int counter);
void F_Pchar(stack_t **head, unsigned int counter);
void F_Pstr(stack_t **head, unsigned int counter);
void F_Rotl(stack_t **head, unsigned int counter);
void F_Rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addNode(stack_t **head, int n);
void addQueue(stack_t **head, int n);
void F_Queue(stack_t **head, unsigned int counter);
void F_Stack(stack_t **head, unsigned int counter);
#endif

