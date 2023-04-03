#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int s1, s2, w;

	s1 = 0;
	s2 = 0;

	for (w = 0; w < size; w++)
	{
		s1 = s1 + a[w * size + y];
	}

	for (w = size - 1; w >= 0; w--)
	{
		s2 += a[w * size + (size - w - 1)];
	}

	printf("%d, %d\n", s1, s2);
}