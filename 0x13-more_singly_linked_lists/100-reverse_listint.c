#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = NULL;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;

	for (; current != NULL; current = next)
	{
		next = current->next;
		current->next = prev;
		prev = current;
	}

	*head = prev;
	return (prev);
}
