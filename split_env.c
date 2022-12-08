#include "shell.h"

/**
* tokenize - function that tokenize the path 
* @str: strings variable to tokenize
* @delim: bounding parameters
* Return: full array
*/
char **tokenize(char *str, char *delim)
{
	char **args;
	int index = 0;
	int path_size;
	char *tmp;
	char *token;

	tmp = _strdup(str);

	token = strtok(tmp, delim);

	for (path_size = 0; token; path_size++)
	{
		token = strtok(NULL, delim);
	}
	free(tmp);

	args = malloc(sizeof(char *) * (path_size + 1));

	if (args == NULL)
	{
		return (NULL);
	}

	tmp = _strdup(str);

	token = strtok(tmp, delim);

	for (index = 0; token != NULL; index++)
	{
		args[index] = _strdup(token);
		token = strtok(NULL, delim);
	}
	args[index] = NULL;
	free(tmp);
	return (args);
}
