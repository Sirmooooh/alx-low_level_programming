#include "monty.h"

/**
* rotl - rotates the first element of the stack
* @stack: stack head
* @l_count: counts lines
*
* Return: void
*/
void rotl(stack_t **stack, unsigned int l_count)
{
	stack_t *left;
	stack_t *right;

	(void) l_count;
	if (!stack || !*stack || !(*stack)->next)
		return;

	left = right = *stack;

	while (right->next) /* move the right pointer to the last node */
		right = right->next;
	right->next = left; /* infinite linked list loop */
	left->prev = right;
	*stack = left->next; /* cut the link between the 0 and 1 element */
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
