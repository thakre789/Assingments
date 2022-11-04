#include<stdio.h>
#include<conio.h>
int main()
{
   int n,x;
   printf("enter a number");
   scanf("%d",&n);
   printf("enter the digit which we want to append");
   scanf("%d",&x);
   n=(n*10)+x;
   printf(" the number is %d",n);
   return 0;
}