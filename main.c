#include "monty.h"
int top = -1;
int main()
{
    stack_t *stack = NULL;

    _push("1", 1);
    _pint(&stack, 2);

    _push("2", 3);
    _pint(&stack, 4);

    _push("3", 5);
    _pint(&stack, 6);

    free_stack(&stack);

    return 0;
}
