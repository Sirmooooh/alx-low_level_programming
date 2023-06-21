#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * add -  adds the first two nodes of the stack
 * @stack: stack given by main
 * @l_cnt: counts lines
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int l_cnt)
{
	int assmnt;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", l_cnt);
		status = EXIT_FAILURE;
		return;
	}

	assmnt = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, l_cnt);/*For top node*/
	(*stack)->n = assmnt;
}
