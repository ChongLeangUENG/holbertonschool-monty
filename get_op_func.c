#include "monty.h"

/**
 * get_op_func - 
 * @line:
 * @stack:
 *
 */
int get_op_func(char *line, stack_t **stack, unsigned int line_number)
{
	instruction_t func[] = {
		{"pall", __pall},
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
	fprintf(stderr, "L%d: unknow instruction %s\n", line_number, line);
	error = 1;
	return (EXIT_FAILURE);
}