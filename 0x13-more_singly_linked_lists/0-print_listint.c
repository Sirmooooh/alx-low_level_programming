#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 1;

	if (h == NULL)
	{
		return (0);
	}


	printf("%d\n", h->n);
	num += print_listint(h->next);

	return (num);
}
