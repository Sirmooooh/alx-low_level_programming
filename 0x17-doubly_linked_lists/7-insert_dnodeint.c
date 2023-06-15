#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: address of the new node, or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newnode;
dlistint_t *tmp;
unsigned int p;

if (h == NULL)
return (NULL);
tmp = *h;
p = 0;
if (idx == 0)
{
newnode = malloc(sizeof(dlistint_t));
if (!newnode)
return (NULL);
newnode->n = n;
newnode->next = *h;
newnode->prev = NULL;
if (*h != NULL)
(*h)->prev = newnode;
*h = newnode;
return (newnode);
}
while (tmp != NULL)
{
if (p == idx - 1)
{
newnode = malloc(sizeof(dlistint_t));
if (!newnode)
return (NULL);
newnode->n = n;
newnode->next = tmp->next;
newnode->prev = tmp;
tmp->next = newnode;
if (newnode->next != NULL)
newnode->next->prev = newnode;
return (newnode);
}
tmp = tmp->next;
p++;
}
return (NULL);
}
