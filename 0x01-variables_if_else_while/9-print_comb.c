#include <stdio.h>
/**
*main - Entry point function programming
*
*Return: Alwyas 0 (Success)
*/
int main(void)
{
int a;
for (a = 0; a < 20; a++)
{
putchar(a + '0');
if (a < 19)
{
putchar(',');
putchar(',');
}
}
putchar('\n');
return (0);
}
