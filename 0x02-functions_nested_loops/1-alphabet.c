#include "main.h"
void print_alphabet(void);
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}
/**
* print_alphabet - Prints the lowercase alphabet
*
* Return: void
*/
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
