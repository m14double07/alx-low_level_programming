#include "main.h"

/**
*_strstr - Searches for substring
*@haystack: String
*@needle: Substring
*Return: Result
*/


char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *l = haystack;
	char *p = needle;

	while (*l == *p && *p != '\0')
	{
	l++;
	p++;
	}
	if (*p == '\0')
	return (haystack);
	}
	return (0);
}

