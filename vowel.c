#include <stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("Vowel");
}
else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("Vowel");
}
else if(ch>='A'&& ch<='Z')
{
printf("Consonant");
}
else if(ch>='a'&& ch<='z')
{
printf("Consonant");
}
else
{
printf("Invalid");
}
return 0;
}

