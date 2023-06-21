#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: stack given by main
 * @l_cnt: number of lines
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int l_cnt)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", l_cnt);
		status = EXIT_FAILURE;
		return;
	}
	printf("%d\n", (*stack)->n);
}
