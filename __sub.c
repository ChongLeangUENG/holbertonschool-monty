#include "monty.h"

/**
 * __sub - subtracts the top element of the stack
 * @stack: List
 * @line_number: Number to add in node
 */
void __sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		error = 1;
		return;
	}
	(*stack)->next->n -= (*stack)->n;
	__pop(stack, line_number);
}
