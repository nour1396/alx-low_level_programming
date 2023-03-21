#include<stdio.h>
/**
 * main - prints all different combinations of two digits
 * Return: always 0
 */
int main(void)
{
	int k, l;
	for (k = 48; k <= 56; k++)
	{
		for (l = 49; l <= 57; l++)
		{
			if (l > k)
			{
				putchar(k);
				putchar(l);
				if (k != 56 || l != 57)
				{
					putchar('.');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
