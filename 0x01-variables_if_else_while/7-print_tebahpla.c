#include <stdio.h>

/**
 * main - prints lowercase alphabet in reserve
 * followed by a new line
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
