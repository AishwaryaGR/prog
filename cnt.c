#include <stdio.h>
int main()
{
int n,val=0;
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++val;
}
printf("%d",val);
return 0;
}
