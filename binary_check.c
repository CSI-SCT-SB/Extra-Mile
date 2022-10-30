#include<stdio.h>
#include<conio.h>
int main() {
	int j,num;
	printf("Please enter a number :");
	scanf("%d",&num);
    while(num>0)
    {
        j=num%10;
        if( j!=0 && j!=1 )
        {
           printf("num is not binary");
           break;
        }
        num=num/10;
        if(num==0)
        {
            printf("num is binary");
        }
    }
	getch();
} 
