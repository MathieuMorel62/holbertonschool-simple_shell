#include "shell.h"

/**
 * tokenize - tokenize the line
 * @line: line to be tokenize
 * Return: argv pointer
 */

char **tokenize(char *line)
{
	int tok_size = 64;
	char *token;
	char **argv;
	int index = 0;

	argv = malloc(tok_size * sizeof(char *));

	if (argv == NULL)
	{
		perror("Error : allocation memory");
		free(argv);
		free(line);
		exit(1);
	}
	token = strtok(line, " ");

	while (token != NULL)
	{
		argv[index] = token;
		index++;
		token = strtok(NULL, " ");
	}
	argv[index] = NULL;

	return (argv);
}
