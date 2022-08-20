#include "monty.h"

/**
 * __div - divides the second top element of the stack
 * @stack: List
 * @line_number: Number of list to divide
 */
void _div(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		error = 1;
		return;
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		error = 1;
		return;
	}
	(*stack)->next->n /= (*stack)->n;
	__pop(stack, line_number);
}
