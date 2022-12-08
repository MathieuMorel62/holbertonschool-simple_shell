#include "shell.h"

/**
* check_path - checks and finds the path of the command passed to it
*
* @command: command
* Return: the absolute path of the command
*/

char *check_path(char *command)
{
	char *paths = NULL;
	char *path = NULL;
	char *new_path = NULL;

	paths = get_env("PATH");

	if (paths)
		path = strtok(paths, ":");

	if (_strchr(command, '/') && stat(command, &st) == 0)
	{
		if (path)
			free(path);
		return (_strdup(command));
	}
	while (path)
	{
		new_path = malloc(sizeof(char) * 64);
		if (!new_path)
			return (NULL);
		new_path[0] = '\0';
		_strcat(new_path, path);
		_strcat(new_path, "/");
		_strcat(new_path, command);
		if (stat(new_path, &st) ==  0)
		{
			free(paths);
			return (new_path);
		}
		path = strtok(NULL, ":");
		free(new_path);
	}
	if (paths)
		free(paths);
	return (NULL);
}
