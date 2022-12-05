#include "shell.h"

/**
 * print_env - prints the environment variable
 */

void print_env(void)
{
	int index = 0, size;

	for (index = 0; environ[index]; index++)
	{
		size = _strlen(environ[index]);
		write(1, environ[index], size);
		write(1, "\n", 1);
	}
}
