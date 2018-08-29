#include<stdio.h>

int main()
{
int n;

printf("\n enter the number:");
scanf("%d",&n);
if(n>0)
{
printf("Positive");
}
else if(n<0)
{
printf("Negative");
}
else{
printf("zero");
}
return 0;
}
