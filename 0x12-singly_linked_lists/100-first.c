#include <stdio.h>

void __attribute__((constructor)) CalledFirst(void);

/**
 * CalledFirst - Prints a string before the
 *   main function is executed.
 */
void CalledFirst(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
