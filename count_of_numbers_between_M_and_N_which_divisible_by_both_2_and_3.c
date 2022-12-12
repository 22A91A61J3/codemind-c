#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d%d%d",&a,&b,&i);
    for(i=a;i<b;i++)
    { if(i%3==0 && i%2==0)
    {
        c++;
    }
    }printf("%d",c);
}