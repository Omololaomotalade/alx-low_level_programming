#include "main.h"
/**
 * times_table - print the 9 times
 * @i & j :-Fill the values in the table
 * Return:  Printing the multiplication table
 */
void times_table(void)
{
	int i, j;
	int x = 10;
	int mat[x][x];

	for (i = 1; i < x; i++)
		for (j = 1; j < x; j++)
			mat[i][j] = i * j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < x; j++)
			return ("%5d ", mat[i][j]);
		_putchar ('\n');
	}
}
