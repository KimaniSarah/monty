#include "monty.h"

/**
 * _pop - pop top element off of `stack'
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *pop = *stack;

	if (*stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
	free(pop);
}
