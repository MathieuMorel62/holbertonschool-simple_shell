#include "shell.h"

/**
 * check_path - Check if the file is in the path.
 *
 * @ar: Entered commands.
 *
 * Return: If it finds the file in the path, returns the full path.
 *         Else, returns the same command entered.
 */

char *check_path(char *command)
{
	int index;
	char *path = get_env("PATH");
	char **ar = split_env(path);
	char *new_path = malloc(sizeof(char) * 64);
	
	if (new_path == NULL)
	{
	    perror("Error : allocation memory");
	    return (NULL);
	}
	for (index = 0; ar[index] != NULL; index++)
	{
	    new_path[0] = 0;
	    strcat(new_path, ar[index]);
	    strcat(new_path, "/");
	    strcat(new_path, command);

	    if (stat(new_path, &st) == 0)
	    {
	        free(ar);
	        return (new_path);
	    }
	}
	free(new_path);
	free(ar);
	return (NULL);
}
