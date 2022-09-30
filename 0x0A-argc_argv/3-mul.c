#include <stdio.h>
#include <stdlib.h>
/**
 * main -> this is a function to print its name
 *
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
int res, i;
res = 1;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
for (i = 1; i < argc; i++)
{
	res = res * atoi(*(argv + i));
}
printf("%d\n", res);
return (0);
}
