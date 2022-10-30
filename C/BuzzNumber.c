//Program to check whether the given number is a Buzz number or not
//A number is a Buzz number if the number ends with 7 or is divisible by 7

#include<stdio.h>
int main()
{
    int n,r,flag=0;
    printf("\n Enter the number: ");
    scanf("%d",&n);
    r=n%10;
    if(n%7==0)
    flag=1;
    else if(r==7)
    flag=1;
    if(flag==1)
    printf("\nThe number is a Buzz number");
    else
    printf("\nThe number is not a Buzz number");
}