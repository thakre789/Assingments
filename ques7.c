#include<stdio.h>

int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    if((number & 1) == 0)
        printf("Even number");
    else
        printf("Odd number");
  
    return 0;
}