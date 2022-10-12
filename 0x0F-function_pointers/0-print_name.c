#include "function_pointers.h"
/**
 * print_name->prints the name
 *
 * @name parameter
 * @(*f)(char *) function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
