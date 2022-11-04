#include<stdio.h>
#include<conio.h>
int main()
{
  int n,t,x;  
  printf("enter a 3 digit number");
  scanf("%d",&n);
  x=n/10;
  n=n%10;
  n=n*100 + x;
  printf("the number after right shift is %d",n);

  return 0;
}