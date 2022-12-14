#include "main.h"
/**
 * times_table - print the 9 times
 * @i & j :-Fill the values in the table
 * Return:  Printing the multiplication table
 */

void times_table(void)
{
	int i, j;
	int mat[i][j];

	for (i = 1; i < 10; i++)
		for (j = 1; j < 10; j++)
			mat[i][j] = i * j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			return ("%5d ", mat[i][j]);
		_putchar ('\n');
	}
}
