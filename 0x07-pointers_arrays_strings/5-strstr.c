#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *l = needle;

		while (*j == *l && *l != '\0')
		{
			j++;
			l++;
		}

		if (*l == '\0')
			return (haystack);
	}

	return (0);
}