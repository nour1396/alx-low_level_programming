#include <stdio.h>
/**
 * main - prints all combinations of two digits numbers
 *
 * Return: always 0
 */
int main(void)
{
	int s, d;
	for (s = 0; s < 100; s++)
	{
		for (d = 0; d < 100; d++)
		{
			if ( s < d)
			{
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);
				putchar(' ');
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				if (s != 98 || d != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
