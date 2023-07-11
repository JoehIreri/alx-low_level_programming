#include "main.h"
#include <stdlib.h>

/**
 * create_array - to create an array of size size and assign character c
 * @c: character to assign
 * @size: the size of array
 * Description: create array of size size and assign character c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
