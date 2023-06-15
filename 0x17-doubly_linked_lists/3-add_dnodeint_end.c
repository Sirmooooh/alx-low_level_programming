#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode;
dlistint_t *tmp;

newnode = malloc(sizeof(dlistint_t));
if (!newnode)
{
return (NULL);
}
newnode->n = n;
newnode->next = NULL;
newnode->prev = NULL;
if (!*head)
{
*head = newnode;
return (newnode);
}
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = newnode;
newnode->prev = tmp;
return (newnode);
}
