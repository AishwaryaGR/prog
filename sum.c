#include<stdio.h>
int numbers(int n);
int main()
{
int a;
scanf("%d",&a);
printf("%d", numbers(a));
return 0;
}
int numbers(int n)
{
if(n!==0)
return n + numbers(n-1);
else
return n;
}
