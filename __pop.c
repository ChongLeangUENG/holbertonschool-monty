#include "monty.h"

/**
 * __pop - function that removes the top element of the stack.
 * @stack: List
 * @line_number: Number of the list
 */
void __pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		error = 1;
		return;
	}
	*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(temp);
}
