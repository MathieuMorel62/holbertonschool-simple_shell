#include "shell.h"

/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: string
 * Return: return array
 */

char *_strdup(char *str)
{
	char *string_copy;
	unsigned int index = 0;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);

	for (; str[size]; size++)
		;

	string_copy = malloc(size + 1);

	if (string_copy == NULL)
		return (NULL);
	while (index < size)
	{
		string_copy[index] = str[index];
		index++;
	}
	string_copy[index] = '\0';
	return (string_copy);
}
