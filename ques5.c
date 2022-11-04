#include<stdio.h>
#include<conio.h>
int main()
{
  int n,t,sum=0;  
  printf("enter a 3 digit number ");
  scanf("%d",&n);
  while(n!=0)
  {
   t=n%10;
   sum=sum + t; 
   n=n/10;
  }
   printf("digit sum is %d",sum);
   return 0; 
}