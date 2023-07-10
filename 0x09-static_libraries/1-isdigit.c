#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c:The character to be checked if it is within the range of 0 and 9
 * Return: 1 for digit character or 0 for anything else
 */

int _isdigit(int c)

{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
