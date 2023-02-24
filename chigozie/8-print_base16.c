#include <stdio.h>

/**
* main - main function
*
* Return: return always 0
*/

int main(void)
{
	unsigned char i;

	for (i = 0 ; i < 16 ; i++)
	putchar(i + '0');
	putchar('\n');
	return (0);
}
