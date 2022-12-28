#include "main.h"

/**
 *strcat - concatenates the string pointed to by @src, including the terminat
 *         null byte, to the end of the string pointed by@dest.
 *@dest: a pointer to the string to be concatenates upon.
 *@src: the source string to be appended to@dest.
 *
 *return: A pointer to the destination string @dest.
 *
 */

char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
}

