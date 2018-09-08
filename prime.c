#include<stdio.h>

int main()
{
int i,n,flag=0;

printf("\n enter the number:");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
printf("no");
flag=1;
break;
}
}
if(flag==0)
{
printf("yes");
return 0;
}
}
