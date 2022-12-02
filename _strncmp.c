#include "shell.h"

/**
 * _strncmp - Function to compare strings.
 *
 * @s1: First string to compare.
 * @s2: Second string to compare.
 * @len: Length of string to compare.
 *
 * Return: If success, returns (0).
 *         Else, returns (-1).
 */

int _strncmp(char *s1, char *s2, size_t len)
{
	size_t index = 0;

	while ((s1[index] || s2[index]) && index < len)
	{
		if (s1[index] == s2[index])
			++index;
		else
			return (s1[index] - s2[index]);
	}
	return (0);
}

