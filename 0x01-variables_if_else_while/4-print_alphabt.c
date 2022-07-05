#include <stdio.h>
/**
*main - entry point
*Return : return 0 sucess
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
{
continue;
}
putchar (a);
return (0);
}
