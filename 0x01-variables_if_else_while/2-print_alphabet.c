#include <stdio.h>

/*
 *main - print lower case alphabets
 *description - print lowercase alphabets
 *return - 0
 */

int main(void)
{
     for (int x = 'A'; x <= 'Z'; x++)
     {
         putchar(tolower(x));
     }
     putchar('\n');
     return (0);
}
