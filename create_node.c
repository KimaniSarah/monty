#include "monty.h"
/**
 * new_node_create - add new node
 * @stack:pointer to the stack head
 * @n:value to add to new node
 * Return: pointer to new node
 */
stack_t *new_node_create(stack_t **stack, const int n)
{
	stack_t *new_node;
	
	if (stack == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*stack == NULL)
	{
		new_node->prev = new_node;
		new_node->next = new_node;
	}
	else
	{
		(*stack)->prev->next = new_node;
		new_node->prev = (*stack)->prev;
		(*stack)->prev = new_node;
		new_node->next = *stack;
		(*stack)->next = new_node;
	}
	if (variable.queues == STACKS || variable.stack_length == 0)
	{
		*stack = new_node;
	}
	return (new_node);
}
