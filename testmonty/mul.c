#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * mul - divides the next top value by the top value
 * @stack: stack given by main
 * @l_cnt: line counter
 *
 * Return: void
 */
void mul(stack_t **stack, unsigned int l_cnt)
{
	int assmnt;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", l_cnt);
		status = EXIT_FAILURE;
		return;
	}

	assmnt = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, l_cnt);
	(*stack)->n = assmnt;
}
