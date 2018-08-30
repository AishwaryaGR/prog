# include<stdio.h>
int main()
{
int n,k,i,add=0;
int ar[100];
printf("\nfirst number");
scanf("\n%d",&n);
printf("\nsecond number");
scanf("%d",&k);
printf("\narray elements");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<k;i++)
{
add=add+ar[i];
}
printf("%d",add);
return 0;
}

