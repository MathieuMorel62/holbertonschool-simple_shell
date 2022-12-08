#include "shell.h"

/**
* _execve - function that executes the program
* @args: pointer to pointer argument string
* Return: return exit status of program
*/

int exec(char **args)
{
	int status = 0;
	pid_t my_pid;

	my_pid = fork();

	if (my_pid == 0)
	{
		execve(args[0], args, environ);
	}
	else
		wait(&status);
	return (WEXITSTATUS(status));
}

