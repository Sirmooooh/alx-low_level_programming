#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pchar - prints the int at the top of the stack as character
 * @stack: stack given by main
 * @l_cnt: number of lines
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int l_cnt)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", l_cnt);
		status = EXIT_FAILURE;
		return;
	}
	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", l_cnt);
		status = EXIT_FAILURE;
		return;
	}
	printf("%c\n", (*stack)->n);
}
