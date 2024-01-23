#include "sort.h"

/**
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *temp;

	int value;

	if (list  == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	
	while (current != NULL)
	{
		temp = current->prev;

		while (temp != NULL && temp->n > current->n)
		{
			value = temp->n;
			temp->n = current->n;
			current->n = value;


			temp = temp->prev;
		}
		current = current->next;
	}
			

}
