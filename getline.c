#include "shell.h"

/**
 * f_read - function
 *
 * Return: line if success or NULL if it failled
 */

char *f_read(void)
{
	char *line = NULL;
	size_t size = 0;
	ssize_t length = 0;

	length = getline(&line, &size, stdin);
	
	if (length == -1 || _strcmp(line, "exit\n") == 0)
	{     
	        free(line);
	        exit(0);
	}
	if (line[length - 1] == '\n' && line[1] != '\0')
	{
		line[length - 1] = '\0';
	}
	return (line);
}
