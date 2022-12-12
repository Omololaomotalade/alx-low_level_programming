#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n,rand(), RAND_MAX, last_num;


srand(time(0));

last_num = n%10;

n = rand() - RAND_MAX / 2;

printf("Last digit of %d is %d", n, last_num)

if (last_num > 5)
printf("and is greater than \n", n);
else if (last_num == 0)
printf("and is 0\n", n);
else if (last_num < 6 && last_num != 0)
printf("and is less than 6 and not 0", n)

return 0;

}
