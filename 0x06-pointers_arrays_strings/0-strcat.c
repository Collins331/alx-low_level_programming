#include "main.h"
/**
*_strcat - concatinates string src to dest
*@dest: the string to print
*@src: the string to concatenate
*Return: Always charactar(s) (success)
*/
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	
	b = 0;
	while(src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}	
	
	dest[a] = '\0';

	return (dest);
}
