#include <stdio.h>
#include "main.h"
/**
 * _strncat - Concatenate strings
 * @dest: Append string
 * @src: String to append
 * @n: Number of bytes
 *
 * Return: Pointer
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int dest_len = 0;

while (dest[index++])
{
dest_len++;
}
for (index = 0; src[index] && index < n; index++)
{
dest[dest_len++] = src[index];
}
return (dest);
}
