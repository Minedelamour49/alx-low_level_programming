#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size @size and initialize it with @c
 *
 * @size: size of array
 * @c: char to initialize array with
 *
 * Description: creates an array of size @size and initializes it with @c
 *
 * Return: pointer to the newly created array or NULL if failed
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
	{
str[i] = c;
}

return (str);
}

