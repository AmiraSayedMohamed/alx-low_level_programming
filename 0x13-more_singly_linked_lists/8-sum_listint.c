#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all data
 * @head: pointer to the first node of the list
 * Return: the  sum of all
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
