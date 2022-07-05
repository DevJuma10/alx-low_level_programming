#include <stdio.h>
/**
*main - this is the enrty point of the program
*Return: success 0
*/
int main(void)
{
char a;
for (a = 'z'; a >= 'a' ; a--)
{
putchar(a);
putchar('\n');
}
return (0);
}
