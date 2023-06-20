#include "monty.h"
void _push(char *arg, unsigned int line_number)
{
	int value;
	size_t h;

	if (arg == NULL || strlen(arg) == 0)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	h = 0;
	while (h < strlen(arg))
	{
		if (!isdigit(arg[h]))
		{
			printf("L%u: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);
		}
		h++;
	}
	value = atoi(arg);
	if (top >= SIZE-1)
	{
		printf("L%u: stack overflow\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		top++;
		stack[top] = value;
	}
}
void pall()
{
	int h;

	for (h = top; h >= 0; h--)
	{
		printf("%d\n", stack[h]);
	}
}
