#include <stdio.h>

void _puts_recursion(char *s)
{
    if (*s == '\0') {   // base case: end of string
        putchar('\n');
        return;
    }
    
    putchar(*s);        // print the current character
    _puts_recursion(s+1);   // recursively print the rest of the string
}

int main()
{
    char str[] = "Hello, world!";
    
    _puts_recursion(str);
    
    return 0;
}
