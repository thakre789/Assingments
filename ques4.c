#include<stdio.h>
#include<conio.h>
int main()
{
    float r,ar;
    printf("enter the value of radius");
    scanf("%f",&r);
    ar=3.14*r*r;
    printf("area of circle is %f having radius %f",ar,r);
    return 0;
}