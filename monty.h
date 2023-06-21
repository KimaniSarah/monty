#ifndef MONTY_H
#define MONTY_H

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

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

#define SIZE 100
#define STACKS 0
#define QUEUES 1
int stack[SIZE];
/**
 * struct variable_s - struct to contain the main variables of the Monty interpreter
 * @queues: flag to determine if in stack vs queue mode
 * @stack_length: length of the stack
 */
typedef struct variable_s
{
	int queues;
	size_t stack_length;
} variable_t;
extern variable_t variable;
stack_t *new_node_create(stack_t **stack, const int n);
int check_for_digit(char *str);
void _push(stack_t **stack, unsigned int line_number);
int main(int argc, char *argv[]);
void _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
void _pop(stack_t **stack, __attribute__((unused))unsigned int line_number);
#endif
