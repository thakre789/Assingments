#include<stdio.h>
#include<conio.h>
int main()
{
   int x,y,t;
   printf("enter the value of x and y");
   scanf("%d%d",&x,&y);
   t=x;
   x=y;
   y=t;
   printf("After swap value of x=%d and value of y=%d",x,y);
   return 0;
}