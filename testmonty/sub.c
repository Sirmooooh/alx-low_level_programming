#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * sub -  substracts the first two nodes of the given stack
 * @stack: stack given by main
 * @l_cnt: counts lines
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int l_cnt)
{
	int assmnt;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", l_cnt);
		status = EXIT_FAILURE;
		return;
	}

	assmnt = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, l_cnt);
	(*stack)->n = assmnt;
}
