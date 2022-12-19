nclude "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s:the pointer
 * Return: length
 */
int _strlen(char *s)
{
int len;

while (*s != '\0')
*s++;
len++;
return (len);
}
