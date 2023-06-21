#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - prints the contents of stack_t stack as a string
 * @stack: stack given by main
 * @l_cnt: line counter for error messages
 *
 * Return: nothing
 */
void pstr(stack_t **stack, unsigned int l_cnt __attribute__((unused)))
{
	stack_t *curr = *stack;

	while (curr)
	{
		if (curr->n <= 0 || curr->n > 127)
			break;
		putchar((char) curr->n);
		curr = curr->next;
	}
	putchar('\n');
}
