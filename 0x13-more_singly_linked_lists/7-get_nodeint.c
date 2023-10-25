#include "lists.h"

/**
 * get_nodeint_at_index - get node at *index nth from a linked list
 * @head: pointer to the first node
 * @index: no of nodes to access
 * Return: node at nth index OR NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
