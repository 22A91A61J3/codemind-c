#include<stdio.h>
int  main()
{
    int c,i,n,s=0;
    scanf("%d",&n);
    int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    s=s+a[i];
}
   printf("%d",s); 
}