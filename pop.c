#include "monty.h"

/**
 * _pop - delete top element
 * @stack: double pointer to head of stack
 * @line_number: line number of current op
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *poped_item = *stack;

        if (variable.stack_length == 0)
        {
                printf("L%u: can't pop an empty stack\n", line_number);
                exit(EXIT_FAILURE);
        }
	(*stack)->next->prev = (*stack)->prev;
	(*stack)->prev->next = (*stack)->next;
	if (variable.stack_length != 1)
	{
		*stack = (*stack)->next;
	}
	else
	{
		*stack = NULL;
	}
	free(poped_item);
	variable.stack_length--;
}
