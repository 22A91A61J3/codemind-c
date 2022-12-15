#include<stdio.h>
#include<math.h>
int main()
{
    float s,t,b,c,x;
    scanf("%f%f%f%f",&s,&t,&b,&c);
    x=sqrt(((s-b)*(s-b))+((t-c)*(t-c)));
    printf("%.4f",x);
}