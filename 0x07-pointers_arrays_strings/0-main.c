#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints bufer in hexa
 * @buffer: the memory address to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int o;

        o = 0;
        while (o < size)
        {
                if (o % 10)
                {
                        printf(" ");
                }
                if (!(o % 10) && o)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[o]);
                o++;
        }
        printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}