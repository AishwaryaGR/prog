#include<stdio.h>
int main()
{
char c1;
scanf("%c",&c1);
if(c1>='A'&& c1<='Z')
{
printf("ALPHABET");
}
else if(c1>='a'&& c1<='z')
{
printf("ALPHABET");
}
else
{
printf("NOT");
}
return 0;
}
