#include<stdio.h>
int main()
{
    int l,b,w,c,a,z,x,y;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=l*b;
    z=(2*w+l)*(2*w+b);
    x=z-a;
    y=x*c;
    printf("%d",y);
}