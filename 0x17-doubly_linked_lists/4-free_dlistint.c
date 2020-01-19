#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free list.
 * @head: head node
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
if (head)
{
<<<<<<< HEAD
return;
}
while (head != NULL)
{
h = head->next;
free(h);
if (h == NULL)
return;
head = h;
}
=======
free_dlistint(head->next);
free(head);
>>>>>>> bb8fda5e88f90beaf5345932afbd0850113e058d
}
}
