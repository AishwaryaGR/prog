#include<stdio.h>
int main()
{
int j,n1,n2;
scanf("%d%d",&n1,&n2);
for(j=n1+1;j<=n2;j++)
{
if(j%2==0)
printf("\t%d",j);
}
return 0;
}
