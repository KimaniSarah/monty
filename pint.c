#include "monty.h"
/**
 * _pint - print value on top
 * @stack: double pointer to top of stack
 * @line_number: line number of current op
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	current = *stack;

	if (variable.stack_length == 0)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", current->n);
}
