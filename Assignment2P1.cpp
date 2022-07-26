#include <stdio.h>
void fun(int n)
{
if (n == 0)
return;
else
fun(n - 1);
printf("%d", n);
}
#include <stdio.h>
void main()
{
int n;
printf("Enter number: ");
scanf("%d", &n);
fun(n);
}
