#include <stdio.h>

/**
  * main - print hexadecimal base numbers to lowercase
  *description: print number in base 16 to lowercase
  * Return: (0) Always (Success)
  */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}
