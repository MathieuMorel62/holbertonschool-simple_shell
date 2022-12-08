#include "shell.h"

/**
* exec - function that executes the program
* @args: pointer to pointer argument string
* Return: return exit status of program
*/

int exec(char **args)
{
	int status = 0;

	if (fork() == 0)
	{
		execve(args[0], args, environ);
	}
	else
		wait(&status);
	return (WEXITSTATUS(status));
}
