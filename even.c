#include <stdio.h>
int main()
{
int a;
printf("enter the number");
scanf("%d",&a);
if(a%2==0 && a>0)
{
printf("even");
}
else if(a%2==1 && a>0)
{
printf("odd")
}
else
{
printf("invalid");
}
return 0;
}
