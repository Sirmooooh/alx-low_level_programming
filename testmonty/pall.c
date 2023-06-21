#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack given by main
 * @l_cnt: number of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int l_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
