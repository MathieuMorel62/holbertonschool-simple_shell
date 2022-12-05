#include "shell.h"

/**
 * print_env - prints the environment variable
 */

void print_env(void)
{
	int index = 0;

	while (environ[index] != NULL)
	{
		write(STDOUT_FILENO, environ[index], _strlen(environ[index]));
		write(STDOUT_FILENO, "\n", 1);
		index++;
	}
}
