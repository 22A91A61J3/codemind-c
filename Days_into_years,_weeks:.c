#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d",&s);
    t=s/365;
    b=(s%365)/7;
    printf("%d
%d",t,b);
}