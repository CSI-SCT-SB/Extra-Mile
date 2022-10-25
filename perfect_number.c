//Perfect number: A number(positive) which is equal to the sum of its divisors , except itself.

#include<stdio.h>

int main()
{
     int n,i,sum=0;
     printf("Enter the number\n");
     scanf("%d",&n);
     
     i=0;
     
     for(i=1;i<=n-1;i++)
     {
         if(n%i==0)
         {
            sum+=i; 
         }
     }
    
     if(sum==n)
     {
         printf("Its perfect number!\n");
     }
     else
     {
         printf("Not a perfect number");
     }
     return 0;
}