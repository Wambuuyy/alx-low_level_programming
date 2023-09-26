#include "lists.h"
/**
 * add_nodeint -Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new element or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
