#include "main.h"

/**
 * _strspn - Entry point
 * @s: input parameter 1
 * @accept: string to search
 * Return: number of characters matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; s[i] != accept[j] ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
