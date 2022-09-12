#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints number is positive ,negativ or zero
 * Description: using main function
 * this program prints a number is positive ,negative or zero
 * Return: 
*/
int main(void)

{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>)
	{
		printf("%i is positive\n", n);
	}
	else if (n==)
	{
		printf("%i is zero\n", n);
	}
	else if (n<)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
