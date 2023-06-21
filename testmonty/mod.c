#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * mod - computes the remainder of the division
 * @stack: stack given by main
 * @l_cnt: line counter
 *
 * Return: void
 */
void mod(stack_t **stack, unsigned int l_cnt)
{
	int assmnt;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", l_cnt);
		status = EXIT_FAILURE;
		return;
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", l_cnt);
		status = EXIT_FAILURE;
		return;
	}

	assmnt = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, l_cnt);
	(*stack)->n = assmnt;
}
