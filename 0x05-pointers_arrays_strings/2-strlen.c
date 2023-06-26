#include "main.h"
#include <stdio.h>

/**
 * _strlen: Return the length of the string
 * @s: string to be checked
 * Retunr: the length of the string
 */

int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
