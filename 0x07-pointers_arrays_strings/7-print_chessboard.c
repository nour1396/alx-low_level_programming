#include "main.h"
/**
 * print_chessboard - Entry
 * @a: array
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int r;
	int y;

	for (r = 0; r < 8; r++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[r][y]);
		_putchar('\n');
	}
}