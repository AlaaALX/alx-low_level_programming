#include "main.h"
#include <stdlib.h>

/**
 * *Create_array - Creates an array of chars, and initializes
 * it with a specific char
 * @size: number of bytes to allocate
 * @c: char ti initialize
 * Return:a  pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{

	char *araay = malloc(size);

	if (size == 0 || array == 0)
	return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
