#include "lists.h"

/**
 * add_nodeint_end -Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Value to be stored in the new node.
 * Return: Address of the new element or NULL if th failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	temp = *head;
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
}
