#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,v;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    v=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",v);
}