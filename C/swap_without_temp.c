#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("After swapping \n");
	printf("value of a is : %d\n", a);
	printf("value of b is : %d ",b);
getch();
} 
