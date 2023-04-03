#include "main.h"
/**
 *_memcpy - a function copy memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int g = n;

	for (; r < g; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}