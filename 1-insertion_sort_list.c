#include "sort.h"

/**
 * insertion_sort_list - sorts a list using insertion sort
 * @list: doubly linked list
 * Return: void
 */

void insertion_sort_list(listint_t **list) {

	listint_t *sortedList = NULL;
	listint_t *current = *list;

	if (list == NULL || *list == NULL) {
		return;
        }

	while (current != NULL) {
	listint_t *next = current->next;

                if (sortedList == NULL || sortedList->n >= current->n) {
                    current->next = sortedList;
                    current->prev = NULL;
                    if (sortedList != NULL) {
                            sortedList->prev = current;
                    }
                    sortedList = current;
                 }
                else {
                    listint_t *temp = sortedList;
                    while (temp->next != NULL && temp->next->n < current->n) {
                    temp = temp->next;
                    }
                    current->next = temp->next;
                    current->prev = temp;
                    if (temp->next != NULL) {
                            temp->next->prev = current;
                    }
                    temp->next = current;
                 }
		 print_list(*list);
                 *list = sortedList;
		 current = next;

             }
}
