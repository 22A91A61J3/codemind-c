#include<stdio.h>
int main()
{
    float s,x,y;
    scanf("%f%f",&x,&y);
    s=(x+y)/2;
    printf("Average of %.0f and %.0f is: %.2f",x,y,s);
}