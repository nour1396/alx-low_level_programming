#include "main.h"
/**
 * _memset - fill memory block with specific val
 * @s: starting memory address to be filled
 * @b: desired value
 * @n: bytes number to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int q = 0;

	for (; n > 0; q++)
	{
		s[q] = b;
		n--;
	}
	return (s);
}