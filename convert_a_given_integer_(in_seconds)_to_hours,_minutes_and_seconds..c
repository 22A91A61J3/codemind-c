#include<stdio.h>
int main()
{
    int s,t,b,c;
    scanf("%d",&s);
    t=s/3600;
    b=(s%3600)/60;
    s=(s%3600)%60;
    printf("H:M:S-%d:%d:%d",t,b,s);
}