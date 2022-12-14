#include "monty.h"

/**
 * __pall - function that print all the list
 * @stack: the list
 * @line_number: number of line of the command
 */
void __pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
