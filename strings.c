#include "shell.h"
/**
* _strcat - concentrates two string.
*@dest: string  value.
*@src: string value.
* Return: dest value.
*/
char *_strcat(char *dest, char *src)
{
int a, b;

for (a = 0; dest[a] != '\0'; a++)
;
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';
return (dest);
}
/**
* _strcmp - function that compares string.
* @s1: character
* @s2: character
*Return: 0.
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0, k = 0;

while (s1[i] != '\0' || s2[j] != '\0')
{
if (s1[i] == s2[j])
{
i++;
j++;
}
else if (s1[i] != s2[j])
{
k = s1[i] - s2[j];
break;
}
}
return (k);
}
/**
* _strlen - returns the length of a string.
* @str: character value.
*Return: i
*/
int _strlen(char *str)
{
int i = 0;

while (str[i])
i++;
return (i);
}
/**
* _memset -  fills memory with a constant n
*@s: string value
*@b: character value.
*@n: integer value.
* Return: string value.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
/**
*_strncmp - compares up to n characters between two string.
*@s1: string1
*@s2: string2
*@n: characters to compare.
*Return: the result
*/
int _strncmp(const char *s1, const char *s2, size_t n)
{
int i = 0, k = 0, j = 0;

while ((s1[i] || s2[j]) && n--)
{
if (s1[i] == s2[j])
{
i++;
j++;
}
else if (s1[i] != s2[j])
{
k = s1[i] - s2[j];
break;
}
}
return (k);
}
