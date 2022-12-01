#include "shell.h"

/**
 * f_read - function read the stdin
 *
 * Return: line if success or failled
 */

char *f_read(void)
{
	char *line = NULL;
	size_t size = 0;
	size_t len = 0;

	len = getline(&line, &size, stdin);

	if (line[len - 1] == '\n' && line[1] != '\0')
		line[len - 1] = '\0';

	return (line);
}
