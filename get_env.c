#include "shell.h"

/**
 * get_env - function that gets the PATH.
 *
 * @command: command entered bu the user
 *
 * Return: NULL.
 */

char *get_env(char *command)
{
	int index, len;

	len = _strlen(command);

	for (index = 0; environ[index]; index++)
	{
		if (_strncmp(environ[index], command, len) == 0)
		return (environ[index] + len + 1);
	}
	return (NULL);
}
