#include "lists.h"

/**
* get_nodeint_at_index - returns the node at certain index in a linked list
* @head: first node in the linked list
* @index: index of the node to return
* unsigned int: datatype
* Return: pointer to the node or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
