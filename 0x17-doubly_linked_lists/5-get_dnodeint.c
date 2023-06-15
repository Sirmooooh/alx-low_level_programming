#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the node to return
 *
 * Return: address of the node, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
unsigned int j;

temp = head;
j = 0;
if (head == NULL)
return (NULL);
while (temp != NULL)
{
if (j == index)
return (temp);
temp = temp->next;
j++;
}
return (NULL);
}
