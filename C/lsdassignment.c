#include <stdio.h>
#include <stdlib.h>


int ones(int binary){
    int ones=0, p=1;
    while(binary!=0){
        if(binary%10==0)
            ones+=p*1;
        p*=10;
        binary/=10;
    }
    return ones;
}
int subtract(int n1,int n2,int add)
{
int i=0, remainder=0, sum=0, p=1;
    while(n1!=0 || n2!=0){
        sum += ((n1%10+n2%10+remainder)%2)*p;
        remainder = (n1%10+n2%10+remainder)/2;
        p*=10;
        n1 /= 10;
        n2 /= 10;
    }
    if(remainder != 0){
        if(add == 1)
            subtract(sum, remainder, 0);
        else
            sum += remainder*p;
    }
    printf("%d",sum);
    return sum;
}



int main()
{
    int bin1,bin2,n1,n2;
    int i;
   printf("Enter the binary no :");
   scanf("%d", &bin1);
    printf("Enter the binary to subtract :");
     scanf("%d", &bin2);
   
     n1=bin1;
     n2=bin2;

    
     
    
     
     
     
     printf("%s- %s",subtract(n1,n2,1));
    ;
 
}     