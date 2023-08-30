#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Entry point
 * @s: input parameter 1
 * @accept: input parameter 2
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (n = 0 ; accept[n] != '\0' ; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (0);
}
