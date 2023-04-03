#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int e = 0;
	int d;

	while (*s)
	{
		for (d = 0; accept[r]; d++)
		{
			if (*s == accept[d])
			{
				e++;
				break;
			}
			else if (accept[d + 1] == '\0')
				return (e);
		}
		s++;
	}
	return (n);
}