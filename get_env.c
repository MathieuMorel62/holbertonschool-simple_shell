#include "shell.h"

/**
 * get_env - function that gets environment variable
 * @env: Name of the environment variable
 * Return: return the content of environment variable
 */
char *get_env(char *env)
{
	char *sign;
	char *content;
	int index;

	for (index = 0; environ[index]; index++)
	{
		sign = _strdup(environ[index]);
		sign = strtok(sign, "=");
		if (_strcmp(sign, env) == 0)
		{
			content = _strdup(strtok(NULL, "="));
			free(sign);
			return (content);
		}
		free(sign);
	}
	return (NULL);
}
