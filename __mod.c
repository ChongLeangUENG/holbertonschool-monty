#include "monty.h"

/**
 * __mod - computes the rest of the division
 * of the second top element of the stack
 * @stack: List
 * @line_number: Number of list to computes
 */
void __mod(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		error = 1;
		return;
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		error = 1;
		return;
	}
	(*stack)->next->n %= (*stack)->n;
	__pop(stack, line_number);
}
