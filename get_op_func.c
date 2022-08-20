#include "monty.h"

/**
 * get_op_func - Get operation function code
 * @line: Line to get
 * @stack: Data structure
 * @line_number: Number of line to show
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 *
 */
int get_op_func(char *line, stack_t **stack, unsigned int line_number)
{
	instruction_t func[] = {
		{"pall", __pall},
		{"pint", __pint},
		{"pop", __pop},
		{"swap", __swap},
		{"add", __add},
		{"nop", __nop},
		{"sub", __sub},
		{"div", __div},
		{NULL, NULL},
	};
	int i;

	for (i = 0; func[i].opcode != NULL; i++)
	{
		if (strcmp(line, func[i].opcode) == 0)
		{
			func[i].f(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, line);
	error = 1;
	return (EXIT_FAILURE);
}
