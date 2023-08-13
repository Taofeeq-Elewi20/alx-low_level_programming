#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (j = i + '1' ; j <= 10 ; j++)
		{
			if (j != i)
			{
				putchar(i);
				putchar(j);
				{
					if (i == '8' && j == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
