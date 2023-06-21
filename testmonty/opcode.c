#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * opcode - function in charge of running builtins
 * @stack: stack given by main
 * @str: string to compare
 * @l_cnt: ammount of lines
 *
 * Return: nothing
 */
void opcode(stack_t **stack, char *str, unsigned int l_cnt)
{
	int c = 0;

	instruction_t op[] = INSTRUCTIONS;

	if (!strcmp(str, "stack"))
	{
		global.data_struct = 1;
		return;
	}
	if (!strcmp(str, "queue"))
	{
		global.data_struct = 0;
		return;
	}

	while (op[c].opcode)
	{
		if (strcmp(op[c].opcode, str) == 0)
		{
			op[c].f(stack, l_cnt);
			return; /* if we found a match, run the function */
		}
		c++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", l_cnt, str);
	status = EXIT_FAILURE;
}
