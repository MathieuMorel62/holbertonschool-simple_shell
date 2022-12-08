#include "shell.h"

/**
* print_env - function that prints environment variables
*/
void print_env(void)
{
	int index;

	for (index = 0; environ && environ[index]; index++)
	{
		_puts(environ[index]);
		_putchar('\n');
	}
}
