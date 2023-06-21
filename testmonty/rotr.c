#include "monty.h"

/**
* rotr - rotates the last node of a stack_t stack
* @stack: stack head
* @l_count: counts lines
*
* Return: void
*/
void rotr(stack_t **stack, unsigned int l_count)
{
	stack_t *bottom;
	stack_t *prev;

	(void) l_count;
	if (!stack || !*stack || !(*stack)->next)
		return;

	bottom = *stack;

	while (bottom->next)
		bottom = bottom->next;

	prev = bottom->prev;
	bottom->next = *stack;
	bottom->prev = NULL;
	prev->next = NULL;
	(*stack)->prev = bottom;
	*stack = bottom;
}
