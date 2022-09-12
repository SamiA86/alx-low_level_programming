#include <stdio.h>
/**
 * main - printing numbers from 0-9 with commas and space between them
 *
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */
int main(void)
{
char c;
int d;
c = 'a';

while (d < 10) 
{

putchar(d+'0');

d++;

}

while (c <= 'f')
{
putchar(c);

c++;
}
putchar('\n');
return (0);
}
