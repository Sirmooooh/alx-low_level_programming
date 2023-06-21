#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
* pop - removes the top element of the stack.
* @stack: stack given by main
* @l_cnt: line number for error messages
*
* Return: void
*/
void pop(stack_t **stack, unsigned int l_cnt)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", l_cnt);
		status = EXIT_FAILURE;
		return;
	}

	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	if (*stack == NULL)
		return; /* prevents errors cause next line might assign a NULL */
	(*stack)->prev = NULL;
}
