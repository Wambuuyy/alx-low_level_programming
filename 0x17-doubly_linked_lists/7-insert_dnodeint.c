#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - A function that inserts a node at
 * position in a list.
 * @h: The double pointer to the head.
 * @idx: The index to insert new node at.
 * @n: The data to add to new node.
 * Return: A pointer to new element, or NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node = NULL, *temp = NULL;
    unsigned int i = 0;

    if (!h)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);
    
    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (!*h || idx == 0)
    {
        if (*h)
            (*h)->prev = new_node;
        new_node->next = *h;
        *h = new_node;
        return (new_node);
    }

    temp = *h;
    while (i < idx - 1 && temp)
    {
        temp = temp->next;
        i++;
    }

    if (!temp)
    {
        free(new_node);
        return (NULL); // Index out of bounds
    }

    new_node->next = temp->next;
    new_node->prev = temp;

    if (temp->next)
        temp->next->prev = new_node;

    temp->next = new_node;

    return (new_node);
}
