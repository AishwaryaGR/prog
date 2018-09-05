#include<stdio.h>
#include<math.h>
int main()
{
int num,expo,i;
 printf("enter number");
scanf("%d",&num);
 printf("enter exponent");
scanf("%d",&expo);
num=pow(num,expo);

printf("%d",num);
return 0;
}
