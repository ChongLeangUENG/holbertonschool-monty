#include "monty.h"

/**
 * __add - function that adds the top two elements of the stack.
 * @stack: List
 * @line_number: number of list.
 */
void __add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		error = 1;
		return;
	}
	(*stack)->next->n += (*stack)->n;
	__pop(stack, line_number);
}
