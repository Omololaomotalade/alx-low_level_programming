#include "main.h"
/**
 * times_table - print the 9 times
 * @i & j :-Fill the values in the table
 * Return:  Printing the multiplication table
 */
#define x 10
void times_table(void)
{
	int i, j;
	int mat[x][x];

	for (i = 1; i < x; i++)
		for (j = 1; j < x; j++)
			mat[i][j] = i * j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < x; j++)
			_putchar('%i', mat[i][j]);
		_putchar ('\n');
	}
}
