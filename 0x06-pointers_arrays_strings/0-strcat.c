#include "main.h"

/**
 *strcat - concatenates the string pointed to by @src, including the terminat
 *         null byte, to the end of the string pointed by@dest.
 *@dest: a pointer to the string to be concatenates upon.
 *@src: the source string to be appended to@dest.
 *
 *return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
