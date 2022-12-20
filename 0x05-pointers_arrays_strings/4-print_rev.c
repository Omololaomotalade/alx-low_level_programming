#include "main.h"
#include<string.h>
/**
 * print_rev - function that prints a string in reverse
 * @s: the character
 */
void print_rev(char *s)
{
int l, i;
char c;
l = strlen(s);

for (i = 0; i < l / 2; i++)
{
c = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = c;
}
return (0);
}
