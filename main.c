#include "shell.h"

/**
 * main - starts the shell
 *
 * Return: 0
 */

int main(void)
{
	int status = 1, index = 0, j = 0;
	char *line, **args = NULL;

/* signal : librairy - SIGINT is the interrupt signal (ctrl+C) */
	signal(SIGINT, _signal);
	while (status != 0)
	{
/*isatty is a function that returns 1 if file descriptor refers to a terminal*/
		status = isatty(STDIN_FILENO);
		if (status == 1)
			write(STDOUT_FILENO, "#cisfun$ ", 10); /* prompt is "#Cisfun$" */
		line = f_read();
		for (j = 0; line[j] != '\0'; j++)
		{
			if (line[index] == ' ')
				index++;
		}
		if (line[index] == '\0')
		{
			free(line);
			continue;
		}
		if (_strcmp(line, "env") == 0)
		{
			print_env();
			free(line);
			continue;
		}
			args = tokenize(line);
			if (args == NULL)
		{
			free(line);
			continue;
		}
			if (line[0] != '\n' || line[1] != '\0')
			status = exec(args);
		free(args);
		free(line);
	}
	return (0);
}
