#include<stdio.h>
int main()
{
int i,num1,num2;
scanf("%d%d",&num1,&num2);
for(i=num1+1;i<=num2;i++)
{
if(i%2==1)
printf("\t%d",i);
}
return 0;
}

