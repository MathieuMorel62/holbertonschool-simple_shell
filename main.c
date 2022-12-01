#include "shell.h"

/**
 * main - start the shell
 *
 * Return: 0
 */

int main(void)
{
	int status = 1;
	char *line;
	char **args = NULL;

	while (status != 0)
	{
		if (status == 1)
		{
			_putchar('&');
			_putchar(' ');
		}

		line = f_read();

		if (args == NULL)
			continue;

		if (line[0] != '\n' || line[1] != '\0')
			status = **args;
	}
	return (0);
}
