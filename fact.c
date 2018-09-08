#include<stdio.h>
int main()
{
int n,res;
printf("%d",&n);
res=fact(n);
printf("%d",res);
}
int fact(int n)
{
int res=0;
if(n==0)
{
res=1;
}
else
{
res=n*fact(n-1);
}
return res;
}
