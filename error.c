#include "shell.h"

/**
* _perror - function that generates a standard error
*            message with the last error
* @name: name of program
* @cmd: command
*/

void _perror(char *name, char *command)
{
	char *msg = NULL;
	int length = 0;

	length = sizeof(char) * (_strlen(name) + _strlen(command) + 20);
	msg = malloc(length);
	if (!msg)
		exit(0);
	msg[0] = '\0';
	_strcat(msg, name);
	_strcat(msg, ": ");
	_strcat(msg, command);
	_strcat(msg, " not found\n");
	write(2, msg, length - 1);
	free(msg);
}
