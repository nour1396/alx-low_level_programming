#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet lowercase
* followwed by new line
*/
void print_alphabet_x10(void)
{
char k;
int i;

i = 0;

while (i < 10)
{
k = 'a';
while (k <= 'z')
{
_putchar(k);
k++;
}
_putchar('\n');
i++;
}
}
