#include "main.h"
#include <string.h>

/**
 * _strlen -> function to find the length of a string
 * @s: string pointer to point to this function<F11>
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
