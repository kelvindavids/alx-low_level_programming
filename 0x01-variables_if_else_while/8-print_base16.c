#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Starting point
 * Return: Always 0 (Success)
 */

int main(void)
{
char low;
int x;

for (x = '0'; x <= '9'; x++)
putchar(x);

for (low = 'a'; low >= 'f'; low++)
putchar(low);
putchar('\n');

return (0);
}
