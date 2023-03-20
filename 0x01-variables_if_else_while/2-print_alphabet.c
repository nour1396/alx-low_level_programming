#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		printf(alp[i]);
	}
	putchar("\n");
	return (0);
}
