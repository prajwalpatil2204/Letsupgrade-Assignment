#include <stdio.h>
void get(int n)
{
if (n < 1)
return;
else
{
get(n - 1);
get(n - 3);
printf("%d", n);
}
}
void main()
{
printf("Output:\n");
get(4);

