#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the numbers 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
int d;

for (d = '0'; d <= '9'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
