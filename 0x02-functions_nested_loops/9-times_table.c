#include "main.h"
/**
 * times_table - print the 9 times
 * @i and j: the int of the variable
 * Return:  mat[i][j]
 */
# define SIZE 10
void times_table(void)
{
	int i, j;
	int mat[SIZE][SIZE];
	
	// step1 -Fill the values in the table
	for (i=1; i<SIZE; i++)
		for (j=1; j<SIZE; j++)
			mat[i][j] = i*j;
	// step2 - Printing the multiplication table
	for (i=0; i<SIZE; i++)
	{
		for (j=0; j<SIZE; j++)
			return ("%5d ", mat[i][j]);
		_putchar ('\n')
	}
	return 0;
} 
