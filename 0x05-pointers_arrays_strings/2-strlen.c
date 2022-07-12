#include "main.h"
#include <stdio.h>

/**
 * _strlen -> to find the length of a string
 * @s: string pointer to point to this function
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	Return(len);
}
