#include "monty.h"
/**
 * _push - insert a value at the top of the stack
 * @arg:argument
 * @line_number:the literal line number
 */
void _push(stack_t **stack, unsigned int line_number)
{
	char *arg;
	int n;

	arg = strtok(NULL, " \t\r\n");
	if (arg == NULL || !check_for_digit(arg))
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(arg);
	if (!new_node_create(stack, n))
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	variable.stack_length++;
}
/**
 * check_for_digit - check if a string only contain digits
 * @str:the string to check for digits
 * Return: 0 if true else false
 */
int check_for_digit(char *str)
{
	size_t i;
	
	if (str == NULL || *str == '\0')
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '-' && i == 0)
		{
			continue;
		}
		if (!isdigit(str[i]))
		{
			return (1);
		}
	}
	return (0);
}
