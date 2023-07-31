#include <stdlib.h>
#include "lists.h"

/**
 * free_list - it will free a linked list
 * @head: list_t list to be freed
 * by Joy
 */
void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
