#include "shell.h"

/**
* _perror - function that generates a standard error
*            message with the last error
* @name: name of program
* @command: command
*/

void _perror(char *name, char *command)
{
	char *message = NULL;
	int length = 0;

	length = sizeof(char) * (_strlen(name) + _strlen(command) + 18);
	message = malloc(length);
	if (!message)
		exit(0);
	message[0] = '\0';
	_strcat(message, name);
	_strcat(message, ": ");
	_strcat(message, command);
	_strcat(message, " not found\n");
	write(2, message, length - 1);
	free(message);
}


