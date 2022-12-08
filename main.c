#include "shell.h"
/**
* main - starts the shell
* @argc: number of given arguments
* @argv: array of arguments
* Return:  return exit status of last program.
*/
int main(int __attribute__((unused)) argc, char **argv)
{
	char *buffer = NULL, *command;
	size_t size = 0;
	char **args;
	int status = 0;

	signal(SIGINT, _signal);
	while (1)
	{
		if (isatty(0) == 1)
			_puts("#cisfun$ ");
		if (getline(&buffer, &size, stdin) == -1 || _strcmp(buffer, "exit\n") == 0)
		{
			if (buffer)
				free(buffer);
			exit(status);
		}
		command = _strdup(buffer);
		strtok(command, "\n");
		args = tokenize(command, "\t \n");
		free(command);
		if (_strcmp(args[0], "env") == 0)
			print_env();
		else if (args[0])
		{
			command = check_path(args[0]);
			if (command)
			{
				free(args[0]);
				args[0] = command;
				status = exec(args);
			}
			else
			{
				status = 127;
				_perror(argv[0], args[0]);
			}
		}
		free_array(args);
	}
	return (0);
}
