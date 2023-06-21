#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * swap -  swaps data from top to previous
 * @stack: stack given by main
 * @l_cnt: ammount of lines
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int l_cnt)
{
	stack_t *tmp = NULL;
	int temp = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", l_cnt);
		status = EXIT_FAILURE;
		return;
	}
	tmp = *stack;
	temp = tmp->n;
	tmp->n = temp;

	tmp->n = tmp->next->n;
	tmp->next->n = temp;

}
