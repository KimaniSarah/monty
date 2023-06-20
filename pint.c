#include "monty.h"
/**
 * _pint - print value on top of `stack', or exit if stack is empty
 * @stack: double pointer to top of stack
 * @line_number: line number of current op
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", (*stack)->n);
	}
}
