#include <stdlib.h>
#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node = NULL, *temp = NULL;
    unsigned int i = 0;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);
    
    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (!h || !(*h))
    {
        *h = new_node;
        return (new_node);
    }

    temp = *h;
    while (idx != i && temp)
    {
        temp = temp->next;
        i++;
    }

    if (idx > i)
    {
        free(new_node);
        return (NULL); /*Index out of bounds*/
    }

    if (temp)
    {
        new_node->prev = temp->prev;
        new_node->next = temp;
        if (temp->prev)
            temp->prev->next = new_node;
        else
            *h = new_node;
        temp->prev = new_node;
    }
    else
    {
        temp = *h;
        while (temp->next)
            temp = temp->next;

        new_node->prev = temp;
        temp->next = new_node;
    }

    return (new_node);
}

