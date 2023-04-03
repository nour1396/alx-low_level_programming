#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *d = "hello";
    char *h;

    h = _strchr(d, 'l');

    if (h != NULL)
    {
        printf("%s\n", h);
    }
    return (0);
}