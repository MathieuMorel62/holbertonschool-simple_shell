#include "shell.h"

/**
 * main - start the shell
 *
 * Return: 0
 */

int main(void)
{
	int status = 1, index = 0, j = 0;
	char *line;
	char **args = NULL;

	while (status != 0)
	{
		status = isatty(0);

		if (status == 1)
		{
			write(1, "#cisfun& ", 9);
		}
		line = f_read();

		while (line[j] != '\0')
		{
			if (line[index] == ' ')
			{
				index++;
			}
			j++;
		}
		if (line[index] == '\0')
		{
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
		{
			status = exec(args);
		}
		free(args);
		free(line);
	}
	return (0);
}
