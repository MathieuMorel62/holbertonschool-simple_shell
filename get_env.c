#include "shell.h"

/**
 * get_env - Getting the PATH.
 *
 * Return: NULL.
 */

char *get_env(char *command)
{
	int index, size;

	size = strlen(command);

	for (index = 0; environ[index]; index++)
	{
		if (strncmp(environ[index], command, size) == 0)
        return (environ[index] + size + 1);	
	}
	return (NULL);
}

