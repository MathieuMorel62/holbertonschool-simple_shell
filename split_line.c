#include "shell.h"

/**
 * tokenize - tokenize the line
 * @line: line to be tokenize
 * Return: argv pointer
 */

char **tokenize(char *line)
{
	int tok_size = 64;
	char *token = NULL;
	char **argv = NULL;
	int index;

	argv = malloc(tok_size * sizeof(char *));

	if (argv == NULL)
	{
		perror("Error : allocation memory");
		free(argv);
		free(line);
		exit(1);
	}
	token = strtok(line, " ");

	for (index = 0; token != NULL; index++)
	{
		argv[index] = token;
		token = strtok(NULL, " ");
	}

	argv[index] = NULL;

	return (argv);
}