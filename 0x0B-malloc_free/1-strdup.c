#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string into a new memory space location
 *
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or NULL if fail
 */
char *_strdup(char *str)
{
char *dup;
int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dup = malloc(sizeof(char) * (len + 1));

if (dup == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
dup[i] = str[i];

dup[i] = '\0';

return (dup);
}
