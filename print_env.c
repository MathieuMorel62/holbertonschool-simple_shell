#include "shell.h"

/**
* print_env - function that prints environment variables
*/
void print_env(void)
{
	int index = 0;

	while (environ[index] != NULL)
	{
		write(1, environ[index], _strlen(environ[index]));
		write(1, "\n", 1);
		index++;
	}
}
