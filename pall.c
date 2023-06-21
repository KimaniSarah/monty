#include "monty.h"
/**
 * _pall -  print all the values on the stack
 *  @stack: double pointer to top of stack
 *  @line_number: line number being executed
 */
void _pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		if (current == *stack)
		{
			return;
		}

	}
}
