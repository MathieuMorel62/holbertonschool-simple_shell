#include "shell.h"

/**
 * free_array - function that frees a 2 dimensional array
 * @array: the array
 */
void free_array(char **array)
{
	int index = 0;

	while (array[index])
	{
		free(array[index]);
		index++;
	}
	free(array);
}
