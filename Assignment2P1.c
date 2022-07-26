#include <iostream>
void fun(int n)
{
if (n == 0)
   return;
else
{

fun(n - 1);
cout<<n;
}
}
void main()
{
int n;
cout<<"Enter number: ";
cin>>n;
fun(n);
}
