#include<stdio.h>
#include<stdlib.h>
int add(int n)
{
    int sum=0,r;
    while(n!=0)
    {
    r=n%10;
    sum=sum+r;
    n=n/10;
    }
    return sum;
}

int reverse(int sum)
{
    int k=0,r;
    while(sum!=0)
    {
    r=sum%10;
    k=k*10+r;
    sum=sum/10;
    }
    return k;
}

int main()
{
    int n,sum,rsum;
    printf("\nEnter the number: ");
    scanf("%d \n",&n);
    sum=add(n);
    rsum=reverse(sum);
    int g=sum*rsum;
    if(n==g)
    printf("Is a magic number\n");
    else
    printf("Is not a magic number\n");
}
